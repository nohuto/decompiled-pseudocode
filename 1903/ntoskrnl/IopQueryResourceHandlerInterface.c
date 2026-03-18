/*
 * XREFs of IopQueryResourceHandlerInterface @ 0x1407537F0
 * Callers:
 *     IoTranslateBusAddress @ 0x14029E1A0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x1407515B0 (IopDuplicateDetection.c)
 *     IopSetupArbiterAndTranslators @ 0x140753240 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryResourceHandlerInterface(int a1, struct _DEVICE_OBJECT *a2, unsigned __int8 a3, _QWORD *a4)
{
  int v8; // ecx
  GUID v9; // xmm0
  unsigned __int16 v10; // bx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  int v13; // ebx
  int v15; // ecx
  int v16; // edi
  bool v17; // zf
  _QWORD v18[9]; // [rsp+30h] [rbp-39h] BYREF
  GUID v19; // [rsp+78h] [rbp+Fh] BYREF

  v19 = (GUID)0LL;
  if ( (struct _DRIVER_OBJECT *)*((_QWORD *)a2->DeviceObjectExtension->DeviceNode + 54) == a2->DriverObject
    || (a2->Flags & 0x1000) == 0 )
  {
    return 3221225659LL;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    v15 = v8 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        return 3221225485LL;
      v9 = GUID_LEGACY_DEVICE_DETECTION_STANDARD;
      v10 = 40;
    }
    else
    {
      v9 = GUID_ARBITER_INTERFACE_STANDARD;
      v10 = 48;
    }
  }
  else
  {
    v9 = GUID_TRANSLATOR_INTERFACE_STANDARD;
    v10 = 52;
  }
  v19 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x20207050u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    *(_WORD *)v12 = v10;
    memset(v18, 0, sizeof(v18));
    LOWORD(v18[0]) = 2075;
    LOWORD(v18[2]) = v10;
    v18[1] = &v19;
    v18[4] = a3;
    *((_WORD *)v12 + 1) = 0;
    WORD1(v18[2]) = 0;
    v18[3] = v12;
    v13 = IopSynchronousCall(a2, (__int64)v18, -1073741637, 0LL, 0LL);
    if ( v13 < 0 )
      goto LABEL_7;
    v16 = a1 - 1;
    if ( v16 )
    {
      if ( (unsigned int)(v16 - 1) > 1 )
      {
        v13 = -1073741811;
        goto LABEL_7;
      }
      v17 = v12[4] == 0LL;
    }
    else
    {
      if ( !v12[4] )
      {
LABEL_21:
        v13 = -1073741823;
LABEL_15:
        if ( v13 >= 0 )
        {
          *a4 = v12;
          return (unsigned int)v13;
        }
LABEL_7:
        ExFreePoolWithTag(v12, 0);
        return (unsigned int)v13;
      }
      v17 = v12[5] == 0LL;
    }
    if ( !v17 )
      goto LABEL_15;
    goto LABEL_21;
  }
  return 3221225626LL;
}
