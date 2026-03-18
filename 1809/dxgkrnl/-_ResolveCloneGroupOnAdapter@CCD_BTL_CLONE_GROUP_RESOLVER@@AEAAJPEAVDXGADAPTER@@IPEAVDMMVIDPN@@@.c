/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00BE2F0
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C00BE0C0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 * Callees:
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00BE7F4 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00BE898 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00C8350 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  __int64 v4; // rsi
  struct DMMVIDPN *v5; // r13
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  CCD_SET_STRING_ID *v13; // rcx
  unsigned int PathSourceFromTarget; // r14d
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r12
  CCD_SET_STRING_ID *v19; // r13
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 TargetIdFromCcdMonitorId; // r13
  __int64 v24; // rdx
  char v25; // r8
  unsigned int v26; // r9d
  CCD_SET_STRING_ID *v27; // r8
  __int64 v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  CCD_SET_STRING_ID *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned __int8 v41[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-3Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v43; // [rsp+48h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v44; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v47; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v48; // [rsp+5Ch] [rbp-24h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-20h] BYREF
  __int128 v50; // [rsp+70h] [rbp-10h]
  unsigned int v51; // [rsp+C0h] [rbp+40h] BYREF
  struct DMMVIDPN *v52; // [rsp+D8h] [rbp+58h]

  v52 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v46, &v48, &v51);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v13 = *this;
    PathSourceFromTarget = -1;
    v15 = v4;
    if ( (unsigned int)v4 < *((unsigned __int16 *)*this + 16) )
    {
      while ( 1 )
      {
        v16 = CCD_SET_STRING_ID::QueryCloneInfo(v13, v15, &v47, 0LL, 0LL);
        v18 = v16;
        if ( v16 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17);
          v40[3] = v18;
          v40[4] = a2;
          v40[5] = v4;
          v40[6] = *this;
          v40[7] = (unsigned int)v15;
          WdLogEvent5_WdAssertion(v40);
          return (unsigned int)v18;
        }
        if ( v47 != v46 )
          goto LABEL_33;
        v19 = *this;
        if ( (unsigned int)v15 >= *((unsigned __int16 *)*this + 16) )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17);
          v31[3] = v19;
          v31[4] = *((unsigned __int16 *)v19 + 16);
          v31[6] = &v45;
          v31[5] = v15;
          WdLogEvent5_WdAssertion(v31);
          v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v32);
          v33[3] = -1073741811LL;
          v33[4] = a2;
          v33[5] = v4;
          v33[6] = *this;
          v33[7] = v15;
          WdLogEvent5_WdAssertion(v33);
          return 3221225485LL;
        }
        v45 = *(unsigned __int16 *)(*((_QWORD *)v19 + 3) + 8 * v15 + 4);
        if ( v45 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17);
          v30[3] = a2;
          v30[4] = v4;
          v30[5] = *this;
          v30[6] = v45;
          v30[7] = (unsigned int)v15;
          WdLogEvent5_WdAssertion(v30);
          return 3221225474LL;
        }
        v42 = -1;
        v41[0] = 0;
        LOBYTE(v51) = 0;
        v43 = D3DKMDT_VOT_UNINITIALIZED;
        v44 = D3DKMDT_VOT_UNINITIALIZED;
        v20 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v19, v15, &UnicodeString);
        TargetIdFromCcdMonitorId = v20;
        if ( v20 < 0 )
          goto LABEL_29;
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          &UnicodeString,
                                          v22,
                                          &v42,
                                          &v43,
                                          &v44,
                                          v41,
                                          (unsigned __int8 *)&v51);
        RtlFreeUnicodeString(&UnicodeString);
        v50 = 0uLL;
        UnicodeString = (struct _UNICODE_STRING)0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
        {
LABEL_29:
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v29[3] = TargetIdFromCcdMonitorId;
          v29[4] = a2;
          v29[5] = v4;
          v29[6] = *this;
          v29[7] = (unsigned int)v15;
          WdLogEvent5_WdError(v29);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        if ( (_DWORD)v15 != (_DWORD)v4 && (_BYTE)v51 )
          goto LABEL_32;
        v5 = v52;
        v24 = 272LL * (unsigned int)v15;
        v25 = -(char)v51;
        *(_DWORD *)((char *)this[1] + v24 + 76) = v42;
        *(_DWORD *)((char *)this[1] + v24 + 136) = v43;
        *(_DWORD *)((char *)this[1] + v24 + 140) = v44;
        *((_BYTE *)this[1] + v24 + 177) = (v25 != 0 ? 2 : 0) | (v41[0] != 0);
        *(_DWORD *)((char *)this[1] + v24 + 232) = v48 | 0xFE520000;
        *(_QWORD *)((char *)this[1] + v24 + 48) |= 0xCC00000000000uLL;
        if ( v5 )
        {
          if ( PathSourceFromTarget == -1 )
          {
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v42);
            if ( PathSourceFromTarget != -1 )
            {
              v26 = 0;
              if ( (_DWORD)v4 )
              {
                v27 = this[1];
                while ( 1 )
                {
                  v28 = 272LL * v26;
                  if ( (*(_QWORD *)((_BYTE *)v27 + v28 + 48) & 0x200000000000LL) != 0
                    && *(_DWORD *)((char *)v27 + v28 + 72) == PathSourceFromTarget
                    && *(_DWORD *)((char *)v27 + v28 + 64) == *((_DWORD *)a2 + 69)
                    && *(_DWORD *)((char *)v27 + v28 + 68) == *((_DWORD *)a2 + 70) )
                  {
                    break;
                  }
                  if ( ++v26 >= (unsigned int)v4 )
                    goto LABEL_25;
                }
                PathSourceFromTarget = -1;
              }
            }
          }
        }
LABEL_25:
        v13 = *this;
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_33;
      }
      if ( (_DWORD)v15 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_32:
      v5 = v52;
LABEL_33:
      if ( PathSourceFromTarget != -1 )
        goto LABEL_44;
    }
    if ( v5 )
      return 3221226021LL;
    PathSourceFromTarget = 0;
    v34 = *(_DWORD *)(*((_QWORD *)a2 + 315) + 80LL);
    if ( !v34 )
      return 3221226021LL;
    while ( 1 )
    {
      v35 = 0;
      if ( !*((_WORD *)*this + 16) )
        break;
      v36 = this[1];
      while ( 1 )
      {
        v37 = 272LL * v35;
        if ( (*(_QWORD *)((_BYTE *)v36 + v37 + 48) & 0x200000000000LL) != 0
          && *(_DWORD *)((char *)v36 + v37 + 72) == PathSourceFromTarget
          && *(_DWORD *)((char *)v36 + v37 + 64) == *((_DWORD *)a2 + 69)
          && *(_DWORD *)((char *)v36 + v37 + 68) == *((_DWORD *)a2 + 70) )
        {
          break;
        }
        if ( ++v35 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_43;
      }
      if ( ++PathSourceFromTarget >= v34 )
        return 3221226021LL;
    }
LABEL_43:
    if ( PathSourceFromTarget == -1 )
    {
      return 3221226021LL;
    }
    else
    {
LABEL_44:
      if ( (unsigned int)v4 < (unsigned int)v15 )
      {
        v38 = 272 * v4;
        v39 = (unsigned int)(v15 - v4);
        do
        {
          v38 += 272LL;
          *(_QWORD *)((char *)this[1] + v38 - 208) = *(_QWORD *)((char *)a2 + 276);
          *(_DWORD *)((char *)this[1] + v38 - 200) = PathSourceFromTarget;
          *(_QWORD *)((char *)this[1] + v38 - 224) |= 0x300000000000uLL;
          --v39;
        }
        while ( v39 );
      }
      return 0LL;
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9);
    v11[3] = v10;
    v11[4] = a2;
    v11[5] = (unsigned int)v4;
    v11[6] = *this;
    v11[7] = (unsigned int)v4;
    WdLogEvent5_WdAssertion(v11);
    return (unsigned int)v10;
  }
}
