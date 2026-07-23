/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1400133C0
 * Callers:
 *     RtlOwnerAcesPresent @ 0x1400133A0 (RtlOwnerAcesPresent.c)
 *     SeComputeCreatorDeniedRights @ 0x14004D520 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned int v4; // ebp
  unsigned __int8 *v5; // rbx
  unsigned int v6; // edi
  int v7; // r12d
  unsigned __int8 v8; // si
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  char *v11; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !a2 )
    return 0;
  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = (unsigned __int8 *)(a2 + 8);
  v6 = 0;
  if ( !*(_WORD *)(a2 + 4) )
    return 0;
  v7 = 104928;
  while ( 1 )
  {
    v8 = v5[1];
    if ( (v8 & 8) == 0 )
    {
      v9 = *v5;
      if ( *v5 <= 0x10u && _bittest(&v7, v9) )
      {
        v10 = 16LL * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC);
      }
      else if ( v9 == 4 )
      {
        v10 = 12LL;
      }
      else
      {
        if ( v9 >= 0xBu && (unsigned __int8)(v9 - 13) > 1u )
          goto LABEL_13;
        v10 = 8LL;
      }
      v11 = (char *)&v5[v10];
      if ( v11 )
      {
        if ( *(_WORD *)v11 == *SeOwnerRightsSid
          && !memcmp(v11, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v11 >> 8) + 8)
          && (!a1 || (v8 & a1) != 0) )
        {
          return 1;
        }
      }
    }
LABEL_13:
    ++v6;
    v5 += *((unsigned __int16 *)v5 + 1);
    if ( v6 >= v4 )
      return 0;
  }
}
