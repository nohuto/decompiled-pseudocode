/*
 * XREFs of SepAdjustGroups @ 0x1406B6EA8
 * Callers:
 *     NtAdjustGroupsToken @ 0x1406B6B70 (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 */

__int64 __fastcall SepAdjustGroups(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char *DestinationSid,
        _DWORD *a8,
        _DWORD *a9,
        char *a10)
{
  unsigned int v11; // eax
  unsigned int v12; // ebp
  char v14; // r10
  ULONG v15; // edx
  char v16; // bl
  unsigned int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rsi
  char v21; // al
  PSID v22; // r14
  _DWORD *v23; // r15
  __int64 v25; // rdx
  int v26; // ecx
  ULONG v27; // r14d
  int v28; // r15d
  ULONG v29; // r14d
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // [rsp+20h] [rbp-68h]
  unsigned int v33; // [rsp+24h] [rbp-64h]
  int v34; // [rsp+28h] [rbp-60h]
  PSID Sid1[2]; // [rsp+30h] [rbp-58h]
  ULONG v36; // [rsp+90h] [rbp+8h]
  char v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]
  char v40; // [rsp+D0h] [rbp+48h]

  v39 = a4;
  v38 = a3;
  v11 = 0;
  v12 = 0;
  v32 = 0;
  v14 = a2;
  v15 = 0;
  *a9 = 0;
  v16 = 1;
  v36 = 0;
  v17 = 1;
  v34 = 1;
  if ( *(_DWORD *)(a1 + 124) <= 1u )
    goto LABEL_11;
  do
  {
    v18 = v17;
    v19 = *(_QWORD *)(a1 + 152);
    v20 = 2 * v18;
    *(_OWORD *)Sid1 = *(_OWORD *)(v19 + 8 * v20);
    if ( !a3 )
    {
      v33 = 0;
      v21 = 0;
      v40 = 0;
      if ( !a4 )
        goto LABEL_9;
      v22 = *(PSID *)(v19 + 8 * v20);
      v23 = (_DWORD *)(a5 + 8);
      while ( !v21 )
      {
        if ( RtlEqualSid(v22, *((PSID *)v23 - 1)) )
        {
          v25 = *(_QWORD *)(a1 + 152);
          ++v32;
          v40 = 1;
          v26 = *(_DWORD *)(v25 + 8 * v20 + 8);
          if ( ((*(_BYTE *)v23 ^ *(_BYTE *)(v25 + 8 * v20 + 8)) & 4) != 0 )
          {
            if ( (v26 & 1) != 0 )
              return 3221225565LL;
            if ( (v26 & 0x10) != 0 )
              return 3221226163LL;
            v27 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v36 += v27;
            if ( a2 )
            {
              if ( a6 )
              {
                *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
                RtlCopySid(v27, DestinationSid, Sid1[0]);
                v25 = *(_QWORD *)(a1 + 152);
                DestinationSid += v27;
              }
              *(_DWORD *)(v25 + 8 * v20 + 8) &= ~(*(_DWORD *)(v25 + 8 * v20 + 8) & 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v20 + 8) |= *v23 & 4;
            }
            ++*a9;
            v22 = Sid1[0];
          }
        }
        v23 += 4;
        a4 = v39;
        ++v33;
        v21 = v40;
        if ( v33 >= v39 )
          goto LABEL_8;
      }
      goto LABEL_8;
    }
    v28 = *(_DWORD *)(v19 + 8 * v20 + 8) & 6;
    if ( ((v28 - 2) & 0xFFFFFFFD) == 0 )
    {
      v29 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
      v36 = v29 + v15;
      if ( v14 )
      {
        if ( a6 )
        {
          *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
          *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
          RtlCopySid(v29, DestinationSid, Sid1[0]);
          v19 = *(_QWORD *)(a1 + 152);
          a4 = v39;
          DestinationSid += v29;
        }
        v30 = *(_DWORD *)(v19 + 8 * v20 + 8);
        if ( v28 == 2 )
          v31 = v30 | 4;
        else
          v31 = v30 & 0xFFFFFFFB;
        *(_DWORD *)(v19 + 8 * v20 + 8) = v31;
      }
      ++*a9;
LABEL_8:
      a3 = v38;
    }
LABEL_9:
    v15 = v36;
    v17 = v34 + 1;
    v14 = a2;
    v34 = v17;
  }
  while ( v17 < *(_DWORD *)(a1 + 124) );
  v11 = v32;
LABEL_11:
  if ( !a3 && v11 < a4 )
    v12 = 262;
  if ( !*a9 || !v14 )
    v16 = 0;
  *a10 = v16;
  if ( a6 )
    *a8 = 16 * *a9 + 8 + v15;
  return v12;
}
