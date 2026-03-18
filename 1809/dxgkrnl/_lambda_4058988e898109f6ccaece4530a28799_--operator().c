/*
 * XREFs of _lambda_4058988e898109f6ccaece4530a28799_::operator() @ 0x1C0282FBC
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C028310C (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4058988e898109f6ccaece4530a28799_::operator()(__int64 a1)
{
  unsigned int *v1; // r8
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  unsigned int v8; // edi
  __int64 v9; // r11
  __int64 v10; // rdx
  int v11; // eax

  v1 = *(unsigned int **)a1;
  v3 = **(_DWORD **)a1;
  v4 = **(_DWORD **)(a1 + 8);
  if ( v3 >= v4 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
    v1 = *(unsigned int **)a1;
    v3 = **(_DWORD **)a1;
    v4 = **(_DWORD **)(a1 + 8);
  }
  v6 = v4 - 1;
  v7 = v4 - 2;
  v8 = *(_DWORD *)(**(_QWORD **)(a1 + 16) + 4 * v6);
  if ( (unsigned int)v7 >= v3 )
  {
    v9 = (unsigned int)(v7 + 1);
    do
    {
      v10 = **(_QWORD **)(a1 + 16);
      v11 = *(_DWORD *)(v10 + 4 * v7);
      v7 = (unsigned int)(v7 - 1);
      *(_DWORD *)(v10 + 4 * v9) = v11;
      v9 = (unsigned int)(v9 - 1);
      v1 = *(unsigned int **)a1;
      v3 = **(_DWORD **)a1;
    }
    while ( (unsigned int)v7 >= v3 );
  }
  *v1 = v3 + 1;
  return v8;
}
