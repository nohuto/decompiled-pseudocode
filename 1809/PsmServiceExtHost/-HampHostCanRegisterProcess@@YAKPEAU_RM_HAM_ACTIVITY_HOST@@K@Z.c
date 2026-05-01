/*
 * XREFs of ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000D0B4
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x18000CE6C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostCanRegisterProcess(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned int v4; // ecx
  _QWORD *v6; // rax

  if ( a2 < 0 )
  {
    v6 = (_QWORD *)((char *)a1 + 584);
    v4 = 0;
    v3 = *v6 == (_QWORD)v6;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 79);
    if ( (v2 & 0x2000000000LL) == 0 )
      return 0;
    v3 = (v2 & 0x10000000000LL) != 0 || (a2 & 1) == 0;
    v4 = 0;
  }
  LOBYTE(v4) = v3;
  return v4;
}
