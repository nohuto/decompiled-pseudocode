/*
 * XREFs of IopInitializeResourceMap @ 0x1409C1C58
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlCmEncodeMemIoResource @ 0x140180B20 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     IopWriteResourceList @ 0x140730D98 (IopWriteResourceList.c)
 *     MmInitializeMemoryLimits @ 0x1409C201C (MmInitializeMemoryLimits.c)
 */

void __fastcall IopInitializeResourceMap(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  unsigned int *v5; // rsi
  int v6; // ebx
  _QWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  ULONG v10; // r15d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *PoolWithTag; // rax
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v12; // r12
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v13; // rdi
  unsigned int v14; // r13d
  ULONGLONG v15; // rbx
  ULONGLONG v16; // r15
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ebx
  bool v21; // zf
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned int v24; // [rsp+38h] [rbp-49h]
  ULONG v25; // [rsp+3Ch] [rbp-45h]
  HANDLE Handle; // [rsp+40h] [rbp-41h] BYREF
  __int64 v27; // [rsp+48h] [rbp-39h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v28; // [rsp+50h] [rbp-31h]
  UNICODE_STRING v29; // [rsp+58h] [rbp-29h] BYREF
  UNICODE_STRING v30; // [rsp+68h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v32[22]; // [rsp+88h] [rbp+7h] BYREF
  __int16 v33; // [rsp+9Eh] [rbp+1Dh]
  char v34; // [rsp+A2h] [rbp+21h]
  char v35; // [rsp+A5h] [rbp+24h]
  __int16 v36; // [rsp+A6h] [rbp+25h]
  char v37; // [rsp+A8h] [rbp+27h]
  char v38; // [rsp+ACh] [rbp+2Bh]

  v1 = a1;
  v27 = a1;
  RtlInitUnicodeString(&DestinationString, L"System Resources");
  v2 = 0;
  v24 = 0;
  do
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        RtlInitUnicodeString(&v30, L"Reserved");
        RtlInitUnicodeString(&v29, L".Translated");
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( v18 >= 0x25 )
LABEL_33:
            _report_rangecheckfailure();
          v32[v18] = 0;
          ++v17;
          ++v18;
        }
        while ( v17 < 0x25 );
        LOBYTE(v33) = 1;
        v34 = 1;
        v5 = (unsigned int *)MmInitializeMemoryLimits(v1, v32);
        if ( !v5 )
          goto LABEL_25;
      }
      else
      {
        RtlInitUnicodeString(&v30, L"Loader Reserved");
        RtlInitUnicodeString(&v29, L".Raw");
        v3 = 0;
        v4 = 0LL;
        do
        {
          if ( v4 >= 0x25 )
            goto LABEL_33;
          v32[v4] = 0;
          ++v3;
          ++v4;
        }
        while ( v3 < 0x25 );
        v32[3] = 1;
        v36 = 257;
        v32[6] = 1;
        v37 = 1;
        v33 = 257;
        v34 = 1;
        v35 = 1;
        v38 = 1;
        v5 = (unsigned int *)MmInitializeMemoryLimits(v1, v32);
        if ( !v5 )
          return;
      }
    }
    else
    {
      RtlInitUnicodeString(&v30, L"Physical Memory");
      RtlInitUnicodeString(&v29, L".Translated");
      v5 = (unsigned int *)MmPhysicalMemoryBlock;
    }
    if ( !*v5 )
    {
      if ( v2 )
        ExFreePoolWithTag(v5, 0);
      goto LABEL_25;
    }
    v6 = 0;
    v7 = v5 + 6;
    v8 = *v5;
    do
    {
      v9 = *v7 << 12;
      if ( v9 == (unsigned __int64)(unsigned int)(16 * *(_DWORD *)v7) << 8
        || v9 == (unsigned __int64)(unsigned int)(v9 >> 16) << 16
        || v9 == (v9 & 0xFFFFFFFF00000000uLL)
        || v9 <= 0xFFFFF000 )
      {
        ++v6;
      }
      else
      {
        v19 = (v9 - 4294963201u) / 0xFFFFF000 + 1;
        v20 = v19 + v6;
        v21 = 0xFFFFFFFF00001000uLL * v19 + v9 == 0;
        v22 = v20 + 1;
        if ( v21 )
          v22 = v20;
        v6 = v22;
      }
      v7 += 2;
      --v8;
    }
    while ( v8 );
    v10 = 20 * (v6 + 1);
    v25 = v10;
    PoolWithTag = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v10, 0x20207050u);
    v28 = PoolWithTag;
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( v2 )
        ExFreePoolWithTag(v5, 0);
      return;
    }
    memset(PoolWithTag, 0, (unsigned int)(20 * (v6 + 1)));
    *(_DWORD *)&v12->Type = 1;
    v13 = v12 + 1;
    v14 = 0;
    *((_DWORD *)&v12->u.Memory48 + 3) = v6;
    if ( !*v5 )
      goto LABEL_20;
    do
    {
      v15 = *(_QWORD *)&v5[4 * v14 + 4] << 12;
      v16 = *(_QWORD *)&v5[4 * v14 + 6] << 12;
      if ( RtlCmEncodeMemIoResource(v13, 3u, v16, v15) >= 0 )
      {
        v13->ShareDisposition = 1;
LABEL_17:
        ++v13;
        goto LABEL_18;
      }
      if ( v16 > 0xFFFFF000 )
      {
        v23 = (v16 - 4294963201u) / 0xFFFFF000 + 1;
        v16 += 0xFFFFFFFF00001000uLL * v23;
        do
        {
          v13->u.Generic.Start.QuadPart = v15;
          v15 += 4294963200LL;
          *(_WORD *)&v13->Type = 259;
          v13->u.Generic.Length = -4096;
          ++v13;
          --v23;
        }
        while ( v23 );
      }
      if ( v16 )
      {
        *(_WORD *)&v13->Type = 259;
        v13->u.Generic.Start.QuadPart = v15;
        v13->u.Generic.Length = v16;
        goto LABEL_17;
      }
LABEL_18:
      ++v14;
    }
    while ( v14 < *v5 );
    v2 = v24;
    v12 = v28;
    v10 = v25;
LABEL_20:
    if ( (int)IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL) >= 0 )
    {
      IopWriteResourceList(Handle, &DestinationString, &v30, &v29, v12, v10);
      ZwClose(Handle);
    }
    ExFreePoolWithTag(v12, 0);
    if ( v2 )
      ExFreePoolWithTag(v5, 0);
    v1 = v27;
LABEL_25:
    v24 = ++v2;
  }
  while ( v2 < 3 );
}
