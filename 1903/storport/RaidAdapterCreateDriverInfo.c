/*
 * XREFs of RaidAdapterCreateDriverInfo @ 0x1C0071B1C
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1C0071E10 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RtlStringCbPrintfW @ 0x1C0017E28 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x1C0017EAC (RaidDriverGetName.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C0033930 (RaidAdapterFreeDriverInfo.c)
 */

__int64 __fastcall RaidAdapterCreateDriverInfo(__int64 a1, _QWORD *a2, PVOID **a3, _BYTE *a4)
{
  _QWORD *v4; // r15
  __int64 v6; // rcx
  int FullDriverPath; // ebx
  SIZE_T v10; // rdi
  wchar_t *Pool; // rax
  wchar_t *v12; // rbp
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  PVOID *v15; // r15
  PVOID *v16; // rax
  PVOID *v17; // rdi
  _BYTE *v18; // rax
  _BYTE *v19; // r9
  __int64 v20; // rdx
  char *v21; // r8
  _WORD *v22; // rcx
  __int16 v23; // ax
  _WORD *v24; // rax
  _BYTE *v25; // rax
  _BYTE *v26; // r9
  __int64 v27; // rdx
  char *v28; // r8
  _WORD *v29; // rcx
  __int16 v30; // ax
  _WORD *v31; // rax
  PVOID v32; // rax
  PVOID v33; // rbp
  int v34; // eax
  __int64 v36; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+28h] [rbp-40h]
  PVOID *v38; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v39; // [rsp+78h] [rbp+10h]

  v39 = a2;
  v4 = a2;
  *a3 = 0LL;
  v36 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v37 = 0LL;
  *a4 = 0;
  FullDriverPath = 0;
  RaidDriverGetName(v6, (__int64)&v36);
  v10 = (unsigned int)(unsigned __int16)v36 + 10;
  Pool = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, v10, 0x44436152u, *(_QWORD *)(a1 + 8));
  v12 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  RtlStringCbPrintfW(Pool, v10, L"%ws.sys", v37);
  v13 = v4 + 7;
  v14 = (_QWORD *)v4[7];
  if ( v14 != v4 + 7 )
  {
    while ( 1 )
    {
      v15 = (PVOID *)(v14 - 1);
      if ( !_wcsicmp((const wchar_t *)v14[3], v12) )
        break;
      v14 = (_QWORD *)*v14;
      if ( v14 == v13 )
      {
        v4 = v39;
        goto LABEL_7;
      }
    }
    *a4 = 1;
    v17 = 0LL;
    v38 = 0LL;
    *a3 = v15;
    goto LABEL_9;
  }
LABEL_7:
  v16 = (PVOID *)RaidAllocatePool(NonPagedPoolNx, 0xA0uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v38 = v16;
  v17 = v16;
  if ( !v16 )
  {
    FullDriverPath = -1073741670;
LABEL_9:
    ExFreePoolWithTag(v12, 0x44436152u);
    goto LABEL_29;
  }
  memset(v16, 0, 0xA0uLL);
  v17[2] = v17 + 1;
  v17[1] = v17 + 1;
  *(_DWORD *)v17 = 160;
  v17[3] = RaUnitStorageDumpControl;
  v17[4] = v12;
  v18 = RaidAllocatePool(NonPagedPoolNx, 0x22uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v19 = v18;
  if ( !v18 )
    goto LABEL_28;
  v20 = 17LL;
  v21 = (char *)((char *)L"dumpstorport.sys" - v18);
  v22 = v18;
  do
  {
    if ( v20 == -2147483629 )
      break;
    v23 = *(_WORD *)((char *)v22 + (_QWORD)v21);
    if ( !v23 )
      break;
    *v22++ = v23;
    --v20;
  }
  while ( v20 );
  v24 = v22 - 1;
  if ( v20 )
    v24 = v22;
  *v24 = 0;
  v17[6] = v19;
  v25 = RaidAllocatePool(NonPagedPoolNx, 0x1AuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v26 = v25;
  if ( !v25 )
    goto LABEL_28;
  v27 = 13LL;
  v28 = (char *)((char *)L"storport.sys" - v25);
  v29 = v25;
  do
  {
    if ( v27 == -2147483633 )
      break;
    v30 = *(_WORD *)((char *)v29 + (_QWORD)v28);
    if ( !v30 )
      break;
    *v29++ = v30;
    --v27;
  }
  while ( v27 );
  v31 = v29 - 1;
  if ( v27 )
    v31 = v29;
  *v31 = 0;
  v17[7] = v26;
  RtlInitUnicodeString((PUNICODE_STRING)v17 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), v17 + 16);
  if ( FullDriverPath < 0 )
    FullDriverPath = 0;
  v32 = RaidAllocatePool(NonPagedPoolNx, 0xD0uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v33 = v32;
  if ( !v32 )
  {
LABEL_28:
    FullDriverPath = -1073741670;
LABEL_29:
    if ( v17 )
      RaidAdapterFreeDriverInfo(&v38);
    return (unsigned int)FullDriverPath;
  }
  memset(v32, 0, 0xD0uLL);
  *((_DWORD *)v17 + 17) = 208;
  v17[9] = v33;
  v17[14] = v4;
  if ( (*(_DWORD *)(a1 + 524) & 1) != 0 || (v34 = *(_DWORD *)(a1 + 4356), v34 == 10) || v34 == 1 )
    *((_DWORD *)v17 + 16) |= 1u;
  *a3 = v17;
  return (unsigned int)FullDriverPath;
}
