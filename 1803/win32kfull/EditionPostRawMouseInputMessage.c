/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C006AA30
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 * Callees:
 *     AllocateHidData @ 0x1C0004FA4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0005A70 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C006AD80 (RawInputRequestedForMouse.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  __int64 v7; // r10
  __int64 v8; // r12
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebp
  int v23; // r10d
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 HidData; // rax
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // [rsp+28h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-68h]
  int v43; // [rsp+B8h] [rbp+10h]

  v43 = a2;
  v6 = a2;
  v8 = 0LL;
  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2, a3, a4) )
    return 0LL;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 84) == 2 )
      v40 = *(_QWORD *)(v7 + 72);
    else
      v40 = 0LL;
    v10 = (__int64 *)(*(_QWORD *)(v40 + 16) + 424LL);
  }
  else
  {
    if ( gptiForeground && (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiForeground) )
      return 0LL;
    v10 = (__int64 *)gpqForeground;
  }
  v11 = *v10;
  if ( *(_DWORD *)a3 == 2 )
    v12 = *(_QWORD *)(a3 + 8);
  else
    v12 = 0LL;
  v13 = 0LL;
  v14 = 1;
  if ( v11 )
  {
    v15 = *(_QWORD *)(v11 + 104);
    if ( v15 )
      v16 = *(_QWORD *)(v15 + 16);
    else
      v16 = *(_QWORD *)(v11 + 88);
    v13 = *(_QWORD *)(*(_QWORD *)(v16 + 416) + 824LL);
  }
  v17 = v11;
  if ( v13 && (*(_DWORD *)(v13 + 100) & 1) != 0 )
  {
    v33 = *(_QWORD *)(v11 + 104);
    if ( v33 )
      v34 = *(_QWORD *)(v33 + 16);
    else
      v34 = *(_QWORD *)(v11 + 88);
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 416) + 824LL);
    v36 = *(_QWORD *)(v35 + 64);
    if ( v36 )
      v17 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 424LL);
    HidData = AllocateHidData(v12, 0, 24LL, 0LL, *(_QWORD *)(v35 + 64));
    v38 = HidData;
    if ( !HidData )
      return 0LL;
    v39 = *(_QWORD *)HidData;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a4;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a4 + 16);
    if ( (unsigned int)PostInputMessage(
                         v17,
                         v36,
                         0xFFu,
                         0LL,
                         v39,
                         v6,
                         0LL,
                         *(unsigned int *)(a4 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL) )
      v14 = 0;
    else
      FreeHidData(v38);
  }
  if ( gHidCounters[1] )
  {
    v18 = 0LL;
    v19 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    if ( v17 )
    {
      v20 = *(_QWORD *)(v17 + 104);
      v21 = v20 ? *(_QWORD *)(v20 + 16) : *(_QWORD *)(v17 + 88);
      v22 = *(_DWORD *)(v17 + 428);
      v8 = *(_QWORD *)(v21 + 416);
      v18 = *(_QWORD *)(v17 + 428);
    }
    else
    {
      v22 = 0;
    }
    for ( ; v19 != &RawInputManagerObject::gHidRequestTable[4]; v19 = (__int64 *)*v19 )
    {
      v23 = *((_DWORD *)v19 + 25);
      if ( (v23 & 4) != 0 )
      {
        v24 = (_QWORD *)v19[8];
        if ( v24 )
        {
          v25 = v24[5];
          if ( *(char *)(v25 + 20) >= 0 && *(char *)(v25 + 19) >= 0 && v24[3] == grpdeskRitInput )
          {
            v26 = v24[2];
            v27 = *(_QWORD *)(v26 + 416);
            v28 = *(_QWORD *)(v27 + 872);
            if ( !gbEnforceUIPI
              || (unsigned int)v28 > v22
              || (_DWORD)v28 == v22
              && ((v29 = HIDWORD(v28), (_DWORD)v29 == HIDWORD(v18)) || HIDWORD(v18) == -1 || (_DWORD)v29 == -1)
              || *(int *)(v27 + 12) < 0 )
            {
              if ( v27 != v8 && ((v23 & 8) == 0 || v14) )
              {
                v30 = AllocateHidData(v12, 0, 24LL, 1LL, v19[8]);
                v31 = v30;
                if ( !v30 )
                  return 0LL;
                v32 = *(_QWORD *)v30;
                LODWORD(v42) = 0;
                *(_OWORD *)(v30 + 56) = *(_OWORD *)a4;
                *(_QWORD *)(v30 + 72) = *(_QWORD *)(a4 + 16);
                LODWORD(v41) = v43;
                if ( !(unsigned int)PostInputMessage(
                                      *(_QWORD *)(*(_QWORD *)(v19[8] + 16) + 424LL),
                                      v19[8],
                                      0xFFu,
                                      1LL,
                                      v32,
                                      v41,
                                      0LL,
                                      *(unsigned int *)(a4 + 20),
                                      v42,
                                      0LL,
                                      0LL,
                                      0LL) )
                  FreeHidData(v31);
              }
            }
            else
            {
              EtwTraceUIPIInputError(v26, 0LL, v17, v18, 5);
            }
          }
        }
      }
    }
  }
  return 1LL;
}
