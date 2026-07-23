/*
 * XREFs of WmipQuerySetExecuteSI @ 0x1405FCF88
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x1406B3990 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x1408B3120 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1408B3450 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1408B3560 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x1408B4F6C (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        PVOID Object,
        PIRP Irp,
        KPROCESSOR_MODE AccessMode,
        UCHAR a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  PVOID v10; // r13
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // ebx
  _QWORD *v14; // rsi
  __int64 v15; // r12
  unsigned int v16; // edx
  int v17; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v19; // r15
  _QWORD *v20; // r14
  unsigned int v22; // edx
  int v23; // eax
  ULONG_PTR *v24; // r15
  char v25; // [rsp+30h] [rbp-A1h] BYREF
  char v26[3]; // [rsp+31h] [rbp-A0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-9Dh] BYREF
  unsigned int *v28; // [rsp+38h] [rbp-99h]
  __int128 P; // [rsp+40h] [rbp-91h] BYREF
  _BYTE v30[128]; // [rsp+50h] [rbp-81h] BYREF

  v7 = a7;
  v28 = a7;
  v10 = Object;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  if ( Object )
  {
    v12 = ObReferenceObjectByPointer(Object, v11, WmipGuidObjectType, AccessMode);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, AccessMode, (PVOID *)&P, 0LL);
    v10 = (PVOID)P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v27 = 16;
  *(_QWORD *)&P = v30;
  v13 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v27, (unsigned int)&P, (__int64)v26, (__int64)&v25);
  if ( v13 >= 0 )
  {
    if ( v25 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      Irp->IoStatus.Information = 48LL;
    }
    else if ( v26[0] )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v14 = (_QWORD *)P;
      v15 = 0LL;
      if ( v27 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)(v14[v15] + 80LL);
          *(_DWORD *)(a5 + 4) = v16;
          if ( Irp )
          {
            v17 = WmipForwardWmiIrp(Irp, a4, v16, (UNICODE_STRING *)(a5 + 24), a6, a5);
            p_Information = &Irp->IoStatus.Information;
          }
          else
          {
            v17 = WmipSendWmiIrp(a4, v16, (UNICODE_STRING *)(a5 + 24), a6, a5, &P);
            p_Information = (ULONG_PTR *)&P + 1;
          }
          if ( v17 >= 0 )
            *v28 = *(_DWORD *)p_Information;
          if ( (unsigned int)(v17 + 1073741163) > 1 )
            break;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v27 )
            goto LABEL_18;
        }
        v13 = v17;
LABEL_18:
        v19 = v27;
        v20 = v14;
        do
        {
          WmipUnreferenceEntry(&WmipISChunkInfo, *v20++);
          --v19;
        }
        while ( v19 );
      }
      if ( v14 != (_QWORD *)v30 && v14 )
        ExFreePoolWithTag(v14, 0);
      v7 = v28;
    }
    else
    {
      v22 = *(_DWORD *)(a5 + 4);
      if ( Irp )
      {
        v23 = WmipForwardWmiIrp(Irp, a4, v22, (UNICODE_STRING *)(a5 + 24), a6, a5);
        v24 = &Irp->IoStatus.Information;
      }
      else
      {
        v23 = WmipSendWmiIrp(a4, v22, (UNICODE_STRING *)(a5 + 24), a6, a5, &P);
        v24 = (ULONG_PTR *)&P + 1;
      }
      v13 = v23;
      if ( v23 < 0 )
      {
LABEL_25:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_26;
      }
      *a7 = *(_DWORD *)v24;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_25;
  }
LABEL_26:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v13;
}
