/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C0004248
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0003E70 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  char v4; // bl
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r10
  __int64 v15; // r8
  __int64 **v16; // rax
  _QWORD *v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_51;
  v6 = *(_DWORD *)(a2 + 44);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
      {
        if ( *(_BYTE *)(a2 + 27) )
          v23 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL);
        else
          v23 = *(_QWORD *)(a2 + 64);
        v24 = *(_QWORD *)(a3 + 304);
        if ( v23 < v24 )
        {
          if ( *(_BYTE *)(a2 + 25) )
          {
            ++*(_DWORD *)(a2 + 36);
            ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 788LL);
            ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1288LL);
            v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
            ++*(_DWORD *)(v27 + 736);
            *(_DWORD *)(a3 + 272) |= 4u;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 792), 1u);
            v4 = 1;
            goto LABEL_31;
          }
          goto LABEL_51;
        }
        if ( *(_BYTE *)(a2 + 27) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
          v24 = *(_QWORD *)(a3 + 304);
        }
        else
        {
          v25 = *(_QWORD *)(a2 + 72);
        }
        if ( v25 >= v24 )
          goto LABEL_12;
      }
      else
      {
        if ( v6 == 3 )
          goto LABEL_51;
        if ( (unsigned int)(v6 - 4) > 1 )
          goto LABEL_31;
        v10 = *(_QWORD *)(a3 + 304);
        if ( *(_BYTE *)(a2 + 28) )
          goto LABEL_12;
        v11 = *(unsigned __int64 **)(a2 + 64);
        if ( *(_BYTE *)(a2 + 29) )
        {
          if ( *v11 >= v10 )
            goto LABEL_12;
        }
        else if ( *(_DWORD *)v11 - (int)v10 >= 0 )
        {
          goto LABEL_12;
        }
        if ( *(_QWORD *)(a2 + 80) )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
          ++*(_DWORD *)(v22 + 740);
          *(_DWORD *)(a3 + 272) |= 8u;
        }
        else if ( !*(_BYTE *)(a2 + 30)
               || (*(_BYTE *)(a2 + 27)
                 ? (v12 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL))
                 : *(_DWORD *)(a2 + 44) == 2
                 ? (v12 = *(_QWORD *)(a2 + 64))
                 : (v12 = *(_QWORD *)(a2 + 88)),
                   *(_QWORD *)(a3 + 304) > v12) )
        {
          ++*(_DWORD *)(a2 + 36);
          v4 = 1;
          ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 788LL);
          ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1288LL);
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
          ++*(_DWORD *)(v13 + 736);
          *(_DWORD *)(a3 + 272) |= 4u;
        }
      }
      _InterlockedAdd((volatile signed __int32 *)(a1 + 792), 1u);
      goto LABEL_31;
    }
    v20 = *(_DWORD *)(a2 + 64);
    if ( v20 )
    {
      v21 = *(_DWORD *)(a2 + 56);
      if ( v21 )
      {
        v3 = 1;
        *(_DWORD *)(a2 + 56) = v21 - 1;
      }
      *(_DWORD *)(a2 + 64) = v20 - 1;
LABEL_11:
      if ( v3 )
      {
LABEL_12:
        *(_DWORD *)(a3 + 272) |= 1u;
        return 0LL;
      }
LABEL_31:
      if ( (unsigned int)(*(_DWORD *)(a2 + 44) - 4) > 1 )
      {
        v17 = (_QWORD *)(a3 + 288);
        if ( v4 )
          v18 = a2 + 112;
        else
          v18 = a2 + 96;
        v19 = *(_QWORD **)(v18 + 8);
        if ( *v19 == v18 )
        {
          *v17 = v18;
          v17[1] = v19;
          *v19 = v17;
          *(_QWORD *)(v18 + 8) = v17;
          goto LABEL_34;
        }
      }
      else
      {
        v14 = (__int64 *)(a3 + 288);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 744LL;
        v16 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 752LL);
        if ( *v16 == (__int64 *)v15 )
        {
          *v14 = v15;
          v14[1] = (__int64)v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 8) = v14;
LABEL_34:
          _InterlockedAdd((volatile signed __int32 *)(a2 + 32), 1u);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  else if ( !*(_QWORD *)(a2 + 64) )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
      v7 = *(_QWORD *)(a3 + 88);
      if ( !v7 )
        v7 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a2 + 56) = v7;
      v3 = 1;
    }
    v8 = *(_QWORD *)(a3 + 88);
    if ( !v8 )
      v8 = *(_QWORD *)(a3 + 96);
    *(_QWORD *)(a2 + 64) = v8;
    goto LABEL_11;
  }
LABEL_51:
  v26 = WdLogNewEntry5_WdAssertion();
  WdLogEvent5_WdAssertion(v26);
  return 3221225473LL;
}
