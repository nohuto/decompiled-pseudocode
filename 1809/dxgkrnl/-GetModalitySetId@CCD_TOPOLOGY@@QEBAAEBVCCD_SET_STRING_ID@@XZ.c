/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C86D8
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C0131A70 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C0139F30 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2369::__AUTO_USING_PM_MapIndex2369 @ 0x1C00B0D28 (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2369--__AUTO_USING_PM_MapIndex2369.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00C99A4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00CBBD4 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00CBE04 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00CDF30 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::GetModalitySetId(CCD_TOPOLOGY *this)
{
  unsigned __int16 v1; // bx
  unsigned __int16 *v3; // rsi
  unsigned __int16 v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int i; // r8d
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  SIZE_T v18; // rax
  unsigned __int64 v19; // kr00_8
  PVOID v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned int j; // r8d
  __int64 v26; // rdx
  unsigned __int16 v27; // ax
  __int64 v28; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v31[64]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v3 = (unsigned __int16 *)operator new(0x8002uLL, 0x63644356u, PagedPool);
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 8);
      v6 = *(unsigned __int16 *)(v5 + 20);
      v28 = v5 + 48;
      v29 = v6;
      if ( v6 )
      {
        v7 = (_DWORD *)(v5 + 280);
        v8 = v6;
        do
        {
          *v7 |= 2u;
          v7[2] = 0;
          v7 += 68;
          --v8;
        }
        while ( v8 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v3, v4) < 0 )
        goto LABEL_36;
      RtlInitUnicodeString(&DestinationString, v3);
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v31, &DestinationString);
      CCD_SET_STRING_ID::operator=(this);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v31);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v10 = *((_QWORD *)this + 8);
        if ( v10 )
          v11 = *(_WORD *)(v10 + 20);
        else
          v11 = 0;
        v12 = *((_QWORD *)this + 8);
        if ( v11 != *((_WORD *)this + 16) )
        {
          v13 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v13);
          v10 = *((_QWORD *)this + 8);
          v12 = v10;
        }
        for ( i = 0; ; ++i )
        {
          v15 = v12 ? *(_WORD *)(v12 + 20) : 0;
          if ( i >= v15 || *(_DWORD *)(272LL * i + v12 + 288) != i )
            break;
        }
        if ( v10 )
          v16 = *(_WORD *)(v10 + 20);
        else
          v16 = 0;
        if ( i >= v16 )
          goto LABEL_36;
        if ( v10 )
          v17 = *(_WORD *)(v10 + 20);
        else
          v17 = 0;
        v19 = v17;
        v18 = 2LL * v17;
        if ( !is_mul_ok(v19, 2uLL) )
          v18 = -1LL;
        v20 = operator new(v18, 0x63644356u, PagedPool);
        *((_QWORD *)this + 7) = v20;
        if ( v20 )
        {
          for ( j = 0; ; ++j )
          {
            v26 = *((_QWORD *)this + 8);
            v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
            if ( j >= v27 )
              break;
            *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(272LL * j + v26 + 288)) = j;
          }
          goto LABEL_36;
        }
        v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21);
        v22[3] = this;
        v22[4] = *((_QWORD *)this + 8);
        v23 = *((_QWORD *)this + 8);
        if ( v23 )
          v1 = *(_WORD *)(v23 + 20);
        v22[5] = v1;
        WdLogEvent5_WdLowResource(v22);
      }
      CCD_SET_STRING_ID::_Cleanup(this);
LABEL_36:
      operator delete[](v3);
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2369::__AUTO_USING_PM_MapIndex2369(&v28);
    }
  }
  return this;
}
