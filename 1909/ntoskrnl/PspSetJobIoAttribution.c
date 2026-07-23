/*
 * XREFs of PspSetJobIoAttribution @ 0x14068AA8C
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405B347C (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400EBD88 (IoStartDiskIoAttributionForContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x14068A638 (PspIsSetJobIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x14068ACE4 (IoDiskIoAttributionAllocate.c)
 *     PspRemoveIoAttribution @ 0x14068AD98 (PspRemoveIoAttribution.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_QWORD *Object, __int64 a2, char a3, unsigned int a4)
{
  char v4; // r15
  char v7; // r12
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  const EVENT_DESCRIPTOR *v14; // rbx
  REGHANDLE v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-21h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  __int64 v25; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+78h] [rbp+Fh]
  int v29; // [rsp+7Ch] [rbp+13h]
  unsigned int *v30; // [rsp+80h] [rbp+17h]
  int v31; // [rsp+88h] [rbp+1Fh]
  int v32; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v7 = a2;
  if ( !(_BYTE)a2 )
  {
    if ( !a3 )
      goto LABEL_22;
    v17 = *((_DWORD *)Object + 332);
    if ( v17 < a4 )
    {
      v12 = 0LL;
      v13 = -1073741811;
      goto LABEL_14;
    }
    v18 = v17 - a4;
    *((_DWORD *)Object + 332) = v18;
    if ( v18 )
    {
      v12 = Object[167];
    }
    else
    {
LABEL_22:
      v19 = *((_DWORD *)Object + 333);
      v12 = Object[167];
      if ( v19 > a4 )
      {
        *((_DWORD *)Object + 333) = v19 - a4;
      }
      else
      {
        PspRemoveIoAttribution(Object);
        *((_DWORD *)Object + 333) = 0;
      }
    }
    goto LABEL_11;
  }
  if ( PspIsSetJobIoAttribution(Object, a2, 0) )
  {
    v12 = 0LL;
    v13 = -1073741637;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v9 = *((_DWORD *)Object + 332);
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v13 = -1073741670;
      goto LABEL_14;
    }
    if ( v9 )
    {
      *((_DWORD *)Object + 332) = v9 + a4;
LABEL_25:
      v12 = Object[167];
      goto LABEL_11;
    }
    *((_DWORD *)Object + 332) = a4;
    v4 = 1;
  }
  v10 = *((_DWORD *)Object + 333);
  if ( v10 + a4 < v10 )
  {
    v12 = 0LL;
    v13 = -1073741670;
    goto LABEL_12;
  }
  if ( v10 )
  {
    *((_DWORD *)Object + 333) = v10 + a4;
    goto LABEL_25;
  }
  v11 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(Object, 0LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    IoStartDiskIoAttributionForContext(v11);
    v24 = 1LL;
    v22 = v12;
    v23 = Object;
    PspEnumJobsAndProcessesInJobHierarchy(
      Object,
      (int)PspSetJobIoAttributionJobPreCallback,
      0,
      (int)PspSetJobIoAttributionProcessCallback,
      (__int64)&v22,
      5);
    *((_DWORD *)Object + 333) = a4;
    Object[167] = v12;
LABEL_11:
    v4 = 0;
    v13 = 0;
    goto LABEL_12;
  }
  v12 = 0LL;
  v13 = -1073741801;
LABEL_12:
  if ( v4 )
    *((_DWORD *)Object + 332) -= a4;
LABEL_14:
  v20 = *((_DWORD *)Object + 305);
  v14 = (const EVENT_DESCRIPTOR *)&PsDiskIoAttributionStart;
  v25 = v12;
  v15 = EtwpPsProvRegHandle;
  if ( !v7 )
    v14 = &PsDiskIoAttributionStop;
  v21 = v13;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v14) )
  {
    UserData.Reserved = 0;
    v29 = 0;
    v32 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v27 = &v25;
    v31 = 4;
    v30 = &v21;
    v28 = 8;
    EtwWrite(v15, v14, 0LL, 3u, &UserData);
  }
  return v13;
}
