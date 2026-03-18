/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400FC4A0
 * Callers:
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400FC7E0 (KiInsertTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     KiRemoveTimer2 @ 0x1400FB710 (KiRemoveTimer2.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v4; // r10
  unsigned __int8 v6; // r15
  char v7; // bp
  int v10; // r14d
  int v11; // esi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  bool v16; // r8
  int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // cl
  unsigned __int64 *v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  bool v25; // r8
  int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  bool v30; // r8
  signed __int32 *v31; // rdx
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  signed __int32 v35[8]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v6 = 1;
  v7 = a2;
  v10 = 0;
  *a3 = 0;
  v11 = 0;
  *a4 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    v12 = a1 + 24;
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v13 = *((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3) + 1);
    v14 = *((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3));
    v15 = (unsigned __int64)&KiTimer2Collections + 24 * (v4 & 3);
    if ( (v13 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v15;
      else
        v14 = 0LL;
    }
    v16 = 0;
    v17 = v13 & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v14 + 48) )
        {
          v18 = *(_QWORD *)v14;
          if ( v17 )
          {
            if ( !v18 )
              goto LABEL_20;
            v18 ^= v14;
          }
          if ( !v18 )
          {
LABEL_20:
            v16 = 0;
            break;
          }
        }
        else
        {
          v18 = *(_QWORD *)(v14 + 8);
          if ( v17 )
          {
            if ( !v18 )
              goto LABEL_14;
            v18 ^= v14;
          }
          if ( !v18 )
          {
LABEL_14:
            v16 = 1;
            break;
          }
        }
        v14 = v18;
      }
    }
    RtlRbInsertNodeEx(v15, v14, v16, (_QWORD *)(a1 + 24));
    v19 = *(_QWORD *)(v15 + 8);
    if ( (v19 & 1) != 0 )
    {
      if ( v19 == 1 )
        v20 = 0LL;
      else
        v20 = v19 ^ (v15 | 1);
    }
    else
    {
      v20 = *(_QWORD *)(v15 + 8);
    }
    if ( v20 == v12 )
    {
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(a1 + 72);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v21 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v21 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v21 & 0xEF;
    v22 = (unsigned __int64 *)(0x140000000LL + 24LL * (v21 & 3) + 4332896);
    v23 = *(_QWORD *)(0x140000008LL + 24LL * (v21 & 3) + 4332896);
    v24 = *v22;
    if ( (v23 & 1) != 0 )
    {
      if ( v24 )
        v24 ^= (unsigned __int64)v22;
      else
        v24 = 0LL;
    }
    v25 = 0;
    v26 = v23 & 1;
    if ( v24 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) < *(_QWORD *)(v24 + 32) )
        {
          v27 = *(_QWORD *)v24;
          if ( v26 )
          {
            if ( !v27 )
              goto LABEL_47;
            v27 ^= v24;
          }
          if ( !v27 )
          {
LABEL_47:
            v25 = 0;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)(v24 + 8);
          if ( v26 )
          {
            if ( !v27 )
              goto LABEL_41;
            v27 ^= v24;
          }
          if ( !v27 )
          {
LABEL_41:
            v25 = 1;
            break;
          }
        }
        v24 = v27;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64)v22, v24, v25, (_QWORD *)(a1 + 48));
    v28 = v22[1];
    if ( (v28 & 1) != 0 )
    {
      if ( v28 == 1 )
        v29 = 0LL;
      else
        v29 = v28 ^ ((unsigned __int64)v22 | 1);
    }
    else
    {
      v29 = v22[1];
    }
    if ( v29 == a1 + 48 )
    {
      v10 = 1;
      v22[2] = *(_QWORD *)(a1 + 80);
    }
    v7 = a2;
    v11 |= v10;
  }
  if ( v11 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v35, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1);
        v6 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v30 = 0;
    v31 = *(signed __int32 **)(KiProcessorBlock[KiClockTimerOwner] + 25016);
    if ( v31 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v31);
      v32 = *v31;
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange(v31, v32 | 0x80000, v32);
      }
      while ( v33 != v32 );
      v30 = (v32 & 0x80000) == 0;
    }
    *a4 = v30;
  }
  return v6;
}
