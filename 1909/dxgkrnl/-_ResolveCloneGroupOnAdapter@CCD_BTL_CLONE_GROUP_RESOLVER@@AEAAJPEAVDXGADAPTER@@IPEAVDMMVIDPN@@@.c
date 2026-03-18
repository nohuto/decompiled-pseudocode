/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00DC944
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C00DD090 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 * Callees:
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00DC888 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00DCC54 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00DCCF8 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6A64 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  CCD_SET_STRING_ID *v12; // rcx
  unsigned int PathSourceFromTarget; // r14d
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 TargetIdFromCcdMonitorId; // r12
  CCD_SET_STRING_ID *v19; // r13
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  char v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  CCD_SET_STRING_ID *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  CCD_SET_STRING_ID *v36; // r8
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  unsigned __int8 v45[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v46; // [rsp+44h] [rbp-3Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v47; // [rsp+48h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v48; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v51; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v52; // [rsp+5Ch] [rbp-24h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-20h] BYREF
  __int128 v54; // [rsp+70h] [rbp-10h]
  unsigned int v55; // [rsp+C0h] [rbp+40h] BYREF
  struct DMMVIDPN *v56; // [rsp+D8h] [rbp+58h]

  v56 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v50, &v52, &v55);
  v11 = v8;
  if ( v8 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9);
    v35[3] = v11;
    v35[4] = a2;
    v35[5] = v4;
    v35[6] = *this;
    v35[7] = v4;
    WdLogEvent5_WdAssertion(v35);
    return (unsigned int)v11;
  }
  else
  {
    v12 = *this;
    PathSourceFromTarget = -1;
    v14 = v4;
    if ( (unsigned int)v4 >= *((unsigned __int16 *)*this + 16) )
    {
LABEL_21:
      if ( v5 )
        return 3221226021LL;
      PathSourceFromTarget = 0;
      v31 = *(_DWORD *)(*((_QWORD *)a2 + 319) + 80LL);
      if ( !v31 )
        return 3221226021LL;
      while ( 1 )
      {
        v32 = 0;
        if ( !*((_WORD *)*this + 16) )
          break;
        v33 = this[1];
        while ( 1 )
        {
          v34 = 272LL * v32;
          if ( (*(_QWORD *)((_BYTE *)v33 + v34 + 48) & 0x200000000000LL) != 0
            && *(_DWORD *)((char *)v33 + v34 + 72) == PathSourceFromTarget
            && *(_DWORD *)((char *)v33 + v34 + 64) == *((_DWORD *)a2 + 69)
            && *(_DWORD *)((char *)v33 + v34 + 68) == *((_DWORD *)a2 + 70) )
          {
            break;
          }
          if ( ++v32 >= *((unsigned __int16 *)*this + 16) )
            goto LABEL_27;
        }
        if ( ++PathSourceFromTarget >= v31 )
          return 3221226021LL;
      }
LABEL_27:
      if ( PathSourceFromTarget == -1 )
        return 3221226021LL;
    }
    else
    {
      while ( 1 )
      {
        v15 = CCD_SET_STRING_ID::QueryCloneInfo(v12, v14, &v51, 0LL, 0LL);
        TargetIdFromCcdMonitorId = v15;
        if ( v15 < 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
          v44[3] = TargetIdFromCcdMonitorId;
          v44[4] = a2;
          v44[5] = v4;
          v44[6] = *this;
          v44[7] = v14;
          WdLogEvent5_WdAssertion(v44);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        if ( v51 != v50 )
          goto LABEL_16;
        v19 = *this;
        if ( v14 >= *((unsigned __int16 *)*this + 16) )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
          v40[3] = v19;
          v40[4] = *((unsigned __int16 *)v19 + 16);
          v40[6] = &v49;
          v40[5] = v14;
          WdLogEvent5_WdAssertion(v40);
          v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v42, v41);
          v43[3] = -1073741811LL;
          v43[4] = a2;
          v43[5] = v4;
          v43[6] = *this;
          v43[7] = v14;
          WdLogEvent5_WdAssertion(v43);
          return 3221225485LL;
        }
        v20 = *(unsigned __int16 *)(*((_QWORD *)v19 + 3) + 8LL * v14 + 4);
        v49 = v20;
        if ( (_DWORD)v20 )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v20);
          v39[3] = a2;
          v39[4] = v4;
          v39[5] = *this;
          v39[6] = v49;
          v39[7] = v14;
          WdLogEvent5_WdAssertion(v39);
          return 3221225474LL;
        }
        v46 = -1;
        v47 = D3DKMDT_VOT_UNINITIALIZED;
        v48 = D3DKMDT_VOT_UNINITIALIZED;
        v45[0] = 0;
        LOBYTE(v55) = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v21 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v19, v14, &UnicodeString);
        TargetIdFromCcdMonitorId = v21;
        if ( v21 < 0 )
        {
LABEL_42:
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
          v38[3] = TargetIdFromCcdMonitorId;
          v38[4] = a2;
          v38[5] = v4;
          v38[6] = *this;
          v38[7] = v14;
          WdLogEvent5_WdError(v38);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          &UnicodeString,
                                          v24,
                                          &v46,
                                          &v47,
                                          &v48,
                                          v45,
                                          (unsigned __int8 *)&v55);
        RtlFreeUnicodeString(&UnicodeString);
        v54 = 0uLL;
        UnicodeString = (struct _UNICODE_STRING)0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
          goto LABEL_42;
        if ( v14 != (_DWORD)v4 && (_BYTE)v55 )
          goto LABEL_31;
        v5 = v56;
        v25 = 272LL * v14;
        v26 = -(char)v55;
        *(_DWORD *)((char *)this[1] + v25 + 76) = v46;
        *(_DWORD *)((char *)this[1] + v25 + 136) = v47;
        *(_DWORD *)((char *)this[1] + v25 + 140) = v48;
        *((_BYTE *)this[1] + v25 + 177) = (v26 != 0 ? 2 : 0) | (v45[0] != 0);
        *(_DWORD *)((char *)this[1] + v25 + 232) = v52 | 0xFE520000;
        *(_QWORD *)((char *)this[1] + v25 + 48) |= 0xCC00000000000uLL;
        if ( v5 )
        {
          if ( PathSourceFromTarget == -1 )
          {
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v46);
            if ( PathSourceFromTarget != -1 )
            {
              v27 = 0;
              if ( (_DWORD)v4 )
              {
                v36 = this[1];
                while ( 1 )
                {
                  v37 = 272LL * v27;
                  if ( (*(_QWORD *)((_BYTE *)v36 + v37 + 48) & 0x200000000000LL) != 0
                    && *(_DWORD *)((char *)v36 + v37 + 72) == PathSourceFromTarget
                    && *(_DWORD *)((char *)v36 + v37 + 64) == *((_DWORD *)a2 + 69)
                    && *(_DWORD *)((char *)v36 + v37 + 68) == *((_DWORD *)a2 + 70) )
                  {
                    break;
                  }
                  if ( ++v27 >= (unsigned int)v4 )
                    goto LABEL_15;
                }
                PathSourceFromTarget = -1;
              }
            }
          }
        }
LABEL_15:
        v12 = *this;
        if ( ++v14 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_16;
      }
      if ( v14 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_31:
      v5 = v56;
LABEL_16:
      if ( PathSourceFromTarget == -1 )
        goto LABEL_21;
    }
    if ( (unsigned int)v4 < v14 )
    {
      v28 = 272 * v4;
      v29 = v14 - (unsigned int)v4;
      do
      {
        v28 += 272LL;
        *(_QWORD *)((char *)this[1] + v28 - 208) = *(_QWORD *)((char *)a2 + 276);
        *(_DWORD *)((char *)this[1] + v28 - 200) = PathSourceFromTarget;
        *(_QWORD *)((char *)this[1] + v28 - 224) |= 0x300000000000uLL;
        --v29;
      }
      while ( v29 );
    }
    return 0LL;
  }
}
