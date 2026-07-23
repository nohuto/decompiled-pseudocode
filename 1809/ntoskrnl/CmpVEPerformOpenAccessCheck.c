/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x140597A64
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 *     CmpIsSystemEntity @ 0x1406B3274 (CmpIsSystemEntity.c)
 *     CmpCheckAdminAccess @ 0x1407F3984 (CmpCheckAdminAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 */

__int64 __fastcall CmpVEPerformOpenAccessCheck(
        _QWORD *Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v9; // rcx
  ACCESS_MASK v12; // eax
  char v13; // al
  ACCESS_MASK AccessMask; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+34h] [rbp-24h] BYREF
  char v16; // [rsp+60h] [rbp+8h]

  v6 = Object[1];
  if ( !*(_WORD *)(v6 + 58) && (*(_DWORD *)(a5 + 24) & 0x10) == 0 && (*(_DWORD *)(v6 + 176) & 0x40) == 0 )
  {
    v9 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 4152LL);
    if ( (v9 & 0x10) != 0 )
    {
      LOBYTE(v9) = KeGetCurrentThread()->PreviousMode;
      if ( !(unsigned __int8)CmpIsSystemEntity(v9, 0LL, a5 + 16) )
      {
        LODWORD(v15[0]) = CmpCheckAdminAccess(*(_DWORD *)(a3 + 16), (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 80) + 32LL));
        if ( SLODWORD(v15[0]) >= 0 )
        {
          if ( v16 )
          {
            AccessMask = 0x2000000;
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
            v12 = AccessMask;
            *(_DWORD *)(a3 + 16) = AccessMask;
            *(_DWORD *)(a3 + 24) = v12;
            v13 = CmpCheckKeyBodyAccess(Object, (__int64)v15);
            a6 = v15[0];
            if ( v13 )
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
