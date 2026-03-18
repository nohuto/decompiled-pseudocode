/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x1406A4254
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     RtlMapGenericMask @ 0x140603930 (RtlMapGenericMask.c)
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 *     CmpCheckAdminAccess @ 0x1406F75E4 (CmpCheckAdminAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F85C8 (CmpCheckKeyBodyAccess.c)
 */

__int64 __fastcall CmpVEPerformOpenAccessCheck(
        _QWORD *Object,
        BOOLEAN ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v11; // rcx
  ACCESS_MASK v14; // eax
  char v15; // al
  ACCESS_MASK AccessMask; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17[4]; // [rsp+34h] [rbp-24h] BYREF
  char v18; // [rsp+60h] [rbp+8h]

  v6 = Object[1];
  if ( !*(_WORD *)(v6 + 66) && (*(_DWORD *)(a5 + 24) & 0x10) == 0 && (*(_DWORD *)(v6 + 184) & 0x40) == 0 )
  {
    v11 = *(unsigned int *)(*(_QWORD *)(v6 + 32) + 4152LL);
    if ( (v11 & 0x10) != 0 )
    {
      LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
      if ( !(unsigned __int8)CmpIsSystemEntity(v11, 0LL, a5 + 16) )
      {
        LODWORD(v17[0]) = CmpCheckAdminAccess(
                            AccessState->RemainingDesiredAccess,
                            (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 88) + 32LL));
        if ( SLODWORD(v17[0]) >= 0 )
        {
          if ( v18 )
          {
            AccessMask = 0x2000000;
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
            v14 = AccessMask;
            AccessState->RemainingDesiredAccess = AccessMask;
            AccessState->OriginalDesiredAccess = v14;
            v15 = CmpCheckKeyBodyAccess(Object, ObjectCreated, AccessState, AccessMode, (__int64)v17);
            a6 = v17[0];
            if ( v15 )
              return 0;
          }
          else
          {
            return (unsigned int)-1073741790;
          }
        }
      }
    }
  }
  return a6;
}
