/*
 * XREFs of SepNewTokenAsRestrictedAsProcessToken @ 0x1405BCD54
 * Callers:
 *     NtDuplicateToken @ 0x14064B1D0 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140013360 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140013380 (SeTokenIsWriteRestricted.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 */

__int64 __fastcall SepNewTokenAsRestrictedAsProcessToken(_QWORD *Token, _DWORD *a2, _BYTE *a3)
{
  int v4; // esi
  _BYTE *v5; // r12
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  __int64 v13; // rax
  void *v14; // rcx
  bool v15; // zf
  unsigned int v16; // r15d
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  unsigned int v19; // esi
  __int64 v20; // r13
  void *v21; // r12
  void *v22; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  *a3 = 0;
  v4 = a2[50];
  v5 = a3;
  if ( ((v4 & 0x800) == 0 || (Token[25] & 0x800) != 0)
    && (!SeTokenIsRestricted(a2) || SeTokenIsRestricted(Token))
    && (!SeTokenIsWriteRestricted(a2) || SeTokenIsWriteRestricted(Token))
    && (!SeTokenIsRestricted(a2) || a2[32] >= *((_DWORD *)Token + 32))
    && (~*((_QWORD *)a2 + 9) & Token[9]) == 0LL
    && (~*((_QWORD *)a2 + 8) & Token[8]) == 0LL
    && (~v4 & (_DWORD)Token[25] & 0x1000) == 0 )
  {
    if ( SeTokenIsRestricted(a2) && (v16 = *((_DWORD *)Token + 32), v17 = 0, v16) )
    {
      v18 = a2[32];
      while ( 1 )
      {
        v19 = 0;
        if ( v18 )
        {
          v20 = *((_QWORD *)a2 + 20);
          v21 = *(void **)(Token[20] + 16LL * v17);
          do
          {
            if ( RtlEqualSid(v21, *(PSID *)(v20 + 16LL * v19)) )
              break;
            ++v19;
          }
          while ( v19 < v18 );
          v5 = a3;
        }
        if ( v19 == v18 )
          break;
        if ( ++v17 >= v16 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v7 = a2[31];
      v8 = 0;
      if ( !v7 )
      {
LABEL_14:
        *v5 = 1;
        return 0LL;
      }
      v9 = *((_QWORD *)a2 + 19);
      while ( 1 )
      {
        if ( (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x10) != 0 )
        {
          v11 = *((_DWORD *)Token + 31);
          v12 = 0;
          if ( v11 )
          {
            v13 = Token[19];
            v14 = *(void **)(v9 + 16LL * v8);
            v24 = v13;
            v22 = v14;
            while ( 1 )
            {
              v15 = RtlEqualSid(v14, *(PSID *)(v13 + 16LL * v12)) == 0;
              v13 = v24;
              if ( !v15 )
                break;
              v14 = v22;
              if ( ++v12 >= v11 )
                goto LABEL_13;
            }
            if ( (*(_DWORD *)(v24 + 16LL * v12 + 8) & 0x10) == 0 )
              break;
          }
        }
LABEL_13:
        if ( ++v8 >= v7 )
          goto LABEL_14;
      }
    }
  }
  *v5 = 0;
  return 3221225569LL;
}
