/*
 * XREFs of IsHandleEntrySecure @ 0x1C008AB40
 * Callers:
 *     ValidateHwndEx @ 0x1C0026110 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C002BD60 (ValidateHandleSecure.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v9; // r8d
  __int16 v10; // cx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)&v17,
    a2,
    a3);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned int)((a2 - (__int64)qword_1C0213758) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  v9 = 0;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v10 = *((_WORD *)&unk_1C01D2E9C + 12 * *(unsigned __int8 *)(a2 + 24));
  if ( (v10 & 2) != 0 )
  {
    v12 = v5[v6 + 1];
  }
  else
  {
    if ( (v10 & 1) == 0 )
      return 0LL;
    v11 = v5[v6 + 1];
    if ( !v11 )
      return 0LL;
    v12 = *(_QWORD *)(v11 + 416);
  }
  if ( v12 )
  {
    if ( *(PVOID *)v12 == gpepCSRSS )
      return 1LL;
    v13 = *(_QWORD *)(CurrentProcessWin32Process + 760);
    if ( *(_QWORD *)(v12 + 760) == v13 )
      return 1LL;
    v15 = *(_QWORD **)(v13 + 56);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v13 + 48);
      if ( v16 )
      {
        while ( *v15 != a1 )
        {
          ++v9;
          ++v15;
          if ( v9 >= v16 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
