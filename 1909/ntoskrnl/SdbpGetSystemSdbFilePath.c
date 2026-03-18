/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x140924F8C
 * Callers:
 *     SdbGetPathCustomSdb @ 0x140924590 (SdbGetPathCustomSdb.c)
 *     SdbResolveDatabaseEx @ 0x140924660 (SdbResolveDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  _DWORD *v7; // rdx
  char *v8; // rax
  int v9; // ebx
  __int64 v10; // r8

  *a1 = 0;
  if ( a3 && a3 < 10 )
  {
    v6 = 1LL;
    v7 = &unk_140375C40;
    while ( *v7 != a3 )
    {
      ++v6;
      v7 += 8;
      if ( v6 >= 0xA )
        goto LABEL_8;
    }
    v8 = (char *)&unk_140375C20 + 32 * v6;
    if ( !v8 )
    {
LABEL_8:
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741275;
    }
    if ( *((_QWORD *)v8 + 2) )
    {
      v10 = a5;
      if ( !a5 )
        v10 = *((_QWORD *)v8 + 1);
      v9 = (*((__int64 (__fastcall **)(_WORD *, __int64, __int64, __int64))v8 + 2))(a1, 260LL, v10, a6);
      if ( v9 >= 0 )
        return 0;
      else
        AslLogCallPrintf(1LL);
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return (unsigned int)v9;
}
