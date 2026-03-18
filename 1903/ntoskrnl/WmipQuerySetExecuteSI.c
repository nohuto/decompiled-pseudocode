/*
 * XREFs of WmipQuerySetExecuteSI @ 0x1407116B0
 * Callers:
 *     WmipIoControl @ 0x140668340 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x140711580 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x1408EF370 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1408EF6D0 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1408EF7E0 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x1408F11D0 (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140086CA0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14066982C (WmipForwardWmiIrp.c)
 *     WmipSendWmiIrp @ 0x140711938 (WmipSendWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
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
  PVOID v8; // r13
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  volatile signed __int64 **v15; // rsi
  __int64 v16; // r12
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v21; // r15
  volatile signed __int64 **v22; // r14
  __int64 v24; // rdx
  int v25; // eax
  ULONG_PTR *v26; // r15
  char v27; // [rsp+30h] [rbp-B1h] BYREF
  char v28[3]; // [rsp+31h] [rbp-B0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-ADh] BYREF
  unsigned int *v30; // [rsp+38h] [rbp-A9h]
  PVOID P; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v32; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v34[128]; // [rsp+60h] [rbp-81h] BYREF

  v7 = a7;
  v8 = Object;
  v30 = a7;
  v32 = 0LL;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  v33[0] = 0LL;
  if ( Object )
  {
    v12 = ObReferenceObjectByPointer(Object, v11, WmipGuidObjectType, AccessMode);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, AccessMode, &P, 0LL);
    v8 = P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v29 = 16;
  P = v34;
  v13 = WmipPrepareWnodeSI((_DWORD)v8, a5, (unsigned int)&v29, (unsigned int)&P, (__int64)v28, (__int64)&v27);
  if ( v13 >= 0 )
  {
    if ( v27 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      Irp->IoStatus.Information = 48LL;
    }
    else if ( v28[0] )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v15 = (volatile signed __int64 **)P;
      v16 = 0LL;
      if ( v29 )
      {
        while ( 1 )
        {
          v17 = v15[v16];
          v18 = *((unsigned int *)v17 + 20);
          *(_DWORD *)(a5 + 4) = v18;
          if ( Irp )
          {
            v19 = WmipForwardWmiIrp(Irp, a4, v18, (UNICODE_STRING *)(a5 + 24), a6, a5);
            p_Information = &Irp->IoStatus.Information;
          }
          else
          {
            LOBYTE(v17) = a4;
            v19 = WmipSendWmiIrp(v17, v18, a5 + 24, a6, a5, &v32);
            p_Information = v33;
          }
          if ( v19 >= 0 )
            *v30 = *(_DWORD *)p_Information;
          if ( (unsigned int)(v19 + 1073741163) > 1 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= v29 )
            goto LABEL_18;
        }
        v13 = v19;
LABEL_18:
        v21 = v29;
        v22 = v15;
        do
        {
          WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v22++);
          --v21;
        }
        while ( v21 );
      }
      if ( v15 != (volatile signed __int64 **)v34 && v15 )
        ExFreePoolWithTag(v15, 0);
      v7 = v30;
    }
    else
    {
      v24 = *(unsigned int *)(a5 + 4);
      if ( Irp )
      {
        v25 = WmipForwardWmiIrp(Irp, a4, v24, (UNICODE_STRING *)(a5 + 24), a6, a5);
        v26 = &Irp->IoStatus.Information;
      }
      else
      {
        LOBYTE(v14) = a4;
        v25 = WmipSendWmiIrp(v14, v24, a5 + 24, a6, a5, &v32);
        v26 = v33;
      }
      v13 = v25;
      if ( v25 < 0 )
      {
LABEL_25:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_26;
      }
      *a7 = *(_DWORD *)v26;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_25;
  }
LABEL_26:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v13;
}
