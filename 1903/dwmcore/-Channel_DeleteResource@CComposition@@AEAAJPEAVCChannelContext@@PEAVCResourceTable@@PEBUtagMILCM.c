/*
 * XREFs of ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x18009C0FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800C1260 (_anonymous_namespace_--AddToResourceCount.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801774BC (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_DeleteResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_DELETERESOURCE *a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rbx
  int v14; // r8d
  _DWORD *v15; // rdx
  __int64 v17; // rcx

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 && v4 < *((_DWORD *)a3 + 7) && (v7 = *((_QWORD *)a3 + 5), v8 = v4 * *((_DWORD *)a3 + 6), *(_DWORD *)(v8 + v7)) )
    v9 = *(_QWORD *)(v8 + v7 + 8);
  else
    v9 = 0LL;
  if ( !v9 )
    CComposition::FailFastOnMalformedPacket(this, 724106194LL, 0LL);
  (*(void (__fastcall **)(__int64, struct CChannelContext *, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, a2, 0LL);
  v11 = *((_QWORD *)a2 + 3);
  v12 = -2147024890;
  if ( !v4 || v4 >= *(_DWORD *)(v11 + 28) || (v13 = *(_QWORD *)(v11 + 40) + v4 * *(_DWORD *)(v11 + 24), !*(_DWORD *)v13) )
    v13 = 0LL;
  if ( !v13 || (v14 = *(_DWORD *)v13) == 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070006, 0xC7Du, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x80070006, 0x746u, 0LL);
    return v12;
  }
  if ( *(_QWORD *)(v13 + 8) )
  {
    v15 = *(_DWORD **)(v11 + 56);
    if ( v14 <= 42 )
    {
      if ( v14 != 42 )
      {
        if ( v14 == 29 || v14 == 31 || v14 == 33 || v14 == 35 || v14 == 38 )
        {
          --v15[30];
          goto LABEL_20;
        }
        if ( v14 == 39 )
        {
          --v15[31];
          goto LABEL_20;
        }
        goto LABEL_19;
      }
    }
    else
    {
      if ( v14 == 90 )
      {
        --v15[29];
        goto LABEL_20;
      }
      if ( v14 == 91 )
        goto LABEL_23;
      if ( v14 != 174 )
      {
        if ( v14 != 175 && v14 != 189 && v14 != 197 )
        {
LABEL_19:
          --v15[27];
LABEL_20:
          anonymous_namespace_::AddToResourceCount((unsigned int)v14, 0xFFFFFFFFLL);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 8) + 16LL))(*(_QWORD *)(v13 + 8));
          *(_QWORD *)(v13 + 8) = 0LL;
          goto LABEL_21;
        }
LABEL_23:
        --v15[28];
        goto LABEL_20;
      }
    }
    --v15[26];
    goto LABEL_20;
  }
LABEL_21:
  memset_0((void *)(*(_QWORD *)(v11 + 40) + v4 * *(_DWORD *)(v11 + 24)), 0, *(unsigned int *)(v11 + 24));
  return 0;
}
