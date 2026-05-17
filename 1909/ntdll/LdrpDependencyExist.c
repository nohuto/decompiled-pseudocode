/*
 * XREFs of LdrpDependencyExist @ 0x180021E80
 * Callers:
 *     LdrpRecordModuleDependency @ 0x180021D94 (LdrpRecordModuleDependency.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpDependencyExist(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  if ( a1 == a2
    || *(_DWORD *)(a2 + 56) == 9 && (*(_DWORD *)(a2 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)a2 - 56LL) & 0x20) != 0) )
  {
    return 1;
  }
  v3 = *(_QWORD **)(a1 + 40);
  if ( v3 )
  {
    v4 = v3;
    while ( 1 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4[1] == a2 )
        break;
      if ( v4 == v3 )
        return 0;
    }
    return 1;
  }
  return 0;
}
