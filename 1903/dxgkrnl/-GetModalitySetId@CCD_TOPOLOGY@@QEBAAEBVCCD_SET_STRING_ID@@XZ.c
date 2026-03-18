/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D525C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C012BF38 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C012C9C0 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C01460A0 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00D01C0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00D9284 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DA2D0 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DA500 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DD8D0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::GetModalitySetId(CCD_TOPOLOGY *this)
{
  unsigned __int16 *v2; // rsi
  unsigned __int16 v3; // r8
  __int64 v4; // rbp
  unsigned __int16 v5; // di
  _DWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // r9
  unsigned int i; // r8d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  SIZE_T v20; // rax
  unsigned __int64 v21; // kr00_8
  PVOID v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int16 v29; // ax
  unsigned int j; // r8d
  __int64 v31; // rdx
  unsigned __int16 v32; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v34[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v2 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 8);
      v5 = *(_WORD *)(v4 + 20);
      if ( v5 )
      {
        v6 = (_DWORD *)(v4 + 280);
        v7 = v5;
        do
        {
          *v6 |= 2u;
          v6[2] = 0;
          v6 += 68;
          --v7;
        }
        while ( v7 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v2, v3) < 0 )
        goto LABEL_21;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, v2);
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v34, &DestinationString);
      CCD_SET_STRING_ID::operator=(this);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v34);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v9 = *((_QWORD *)this + 8);
        if ( v9 )
          v10 = *(_WORD *)(v9 + 20);
        else
          v10 = 0;
        v11 = *((_QWORD *)this + 8);
        if ( v10 != *((_WORD *)this + 16) )
        {
          v18 = WdLogNewEntry5_WdAssertion(v8, v9);
          WdLogEvent5_WdAssertion(v18);
          v9 = *((_QWORD *)this + 8);
          v11 = v9;
        }
        for ( i = 0; ; ++i )
        {
          v13 = v11 ? *(_WORD *)(v11 + 20) : 0;
          if ( i >= v13 || *(_DWORD *)(272LL * i + v11 + 288) != i )
            break;
        }
        if ( v9 )
          v14 = *(_WORD *)(v9 + 20);
        else
          v14 = 0;
        if ( i >= v14 )
          goto LABEL_21;
        if ( v9 )
          v19 = *(_WORD *)(v9 + 20);
        else
          v19 = 0;
        v21 = v19;
        v20 = 2LL * v19;
        if ( !is_mul_ok(v21, 2uLL) )
          v20 = -1LL;
        v22 = operator new[](v20, 0x63644356u, PagedPool);
        *((_QWORD *)this + 7) = v22;
        if ( v22 )
        {
          for ( j = 0; ; ++j )
          {
            v31 = *((_QWORD *)this + 8);
            v32 = v31 ? *(_WORD *)(v31 + 20) : 0;
            if ( j >= v32 )
              break;
            *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(272LL * j + v31 + 288)) = j;
          }
          goto LABEL_21;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
        v27[3] = this;
        v27[4] = *((_QWORD *)this + 8);
        v28 = *((_QWORD *)this + 8);
        if ( v28 )
          v29 = *(_WORD *)(v28 + 20);
        else
          v29 = 0;
        v27[5] = v29;
        WdLogEvent5_WdLowResource(v27);
      }
      CCD_SET_STRING_ID::_Cleanup(this);
LABEL_21:
      operator delete[](v2);
      if ( v5 )
      {
        v15 = (_DWORD *)(v4 + 280);
        v16 = v5;
        do
        {
          v15[2] = 0;
          *v15 &= ~2u;
          v15 += 68;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  return this;
}
