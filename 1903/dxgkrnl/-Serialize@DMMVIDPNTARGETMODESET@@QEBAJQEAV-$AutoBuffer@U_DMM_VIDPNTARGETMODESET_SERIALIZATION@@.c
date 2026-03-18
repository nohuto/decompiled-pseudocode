/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BF8E0
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02BC9C8 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C005478C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  _QWORD *v15; // rax
  unsigned __int8 v16; // si
  _BYTE *v17; // rcx
  const struct DMMVIDPNSOURCEMODE *i; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v8 = *((_QWORD *)this + 8);
    v9 = 80 * v8;
    v10 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 80 * v8, a3);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = 0;
      v17 = *(_BYTE **)(a2 + 32);
      *v17 = *((_BYTE *)this + 64);
      i = (const struct DMMVIDPNSOURCEMODE *)*((_QWORD *)this + 6);
      if ( i != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (const struct DMMVIDPNSOURCEMODE *)((char *)i - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
        {
          v19 = *(_QWORD *)(a2 + 32);
          v20 = 9LL * v16;
          *(_DWORD *)(v19 + 8 * v20 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v19 + 8 * v20 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v19 + 8 * v20 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v19 + 8 * v20 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v19 + 8 * v20 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v19 + 8 * v20 + 72) = *((_DWORD *)i + 32);
          ++v16;
        }
      }
      if ( v16 != **(_BYTE **)(a2 + 32) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17, i);
        WdLogEvent5_WdAssertion(v21);
      }
      return 0LL;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v15[3] = v9;
      v15[4] = this;
      v15[5] = v14;
      WdLogEvent5_WdError(v15);
      return (unsigned int)v14;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
