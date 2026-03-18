/*
 * XREFs of ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x1800CF884
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800644A8 (_anonymous_namespace_--AddToResourceCount.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014B36C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_DeleteResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_DELETERESOURCE *a4)
{
  unsigned int v6; // r8d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // ebp
  unsigned int *v19; // rbx
  _DWORD *v20; // rax
  __int64 v22; // rcx

  v6 = *((_DWORD *)a4 + 1);
  if ( v6
    && v6 < *((_DWORD *)a3 + 7)
    && (v9 = *((_QWORD *)a3 + 5), v10 = v6 * *((_DWORD *)a3 + 6), v11 = v10, *(_DWORD *)(v10 + v9))
    && (v12 = *(_QWORD *)(v10 + v9 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, *((unsigned int *)a4 + 2)) )
  {
    v13 = *(_QWORD *)(v11 + v9 + 8);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13
    || ((v14 = *((_DWORD *)a4 + 1)) == 0 || v14 >= *((_DWORD *)a3 + 7)
      ? (v15 = 0)
      : (v15 = *(_DWORD *)(v14 * *((_DWORD *)a3 + 6) + *((_QWORD *)a3 + 5))),
        v15 != *((_DWORD *)a4 + 2)) )
  {
    CComposition::FailFastOnMalformedPacket(this, 724106194LL, 0LL, v13);
  }
  (*(void (__fastcall **)(__int64, struct CChannelContext *, _QWORD))(*(_QWORD *)v13 + 136LL))(v13, a2, 0LL);
  v17 = *((_QWORD *)a2 + 3);
  v18 = -2147024890;
  if ( !v14
    || v14 >= *(_DWORD *)(v17 + 28)
    || (v19 = (unsigned int *)(*(_QWORD *)(v17 + 40) + v14 * *(_DWORD *)(v17 + 24)), !*v19) )
  {
    v19 = 0LL;
  }
  if ( !v19 || (v16 = *v19, !(_DWORD)v16) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024890, 0xD48u);
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024890, 0x7BFu);
    return v18;
  }
  if ( *((_QWORD *)v19 + 1) )
  {
    v20 = *(_DWORD **)(v17 + 56);
    if ( (unsigned int)v16 <= 0x55 )
    {
      if ( (_DWORD)v16 == 85 )
      {
        --v20[29];
        goto LABEL_25;
      }
      if ( (_DWORD)v16 == 29 )
        goto LABEL_39;
      if ( (unsigned int)v16 <= 0x1E )
      {
LABEL_24:
        --v20[27];
LABEL_25:
        anonymous_namespace_::AddToResourceCount(v16, -1);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 1) + 16LL))(*((_QWORD *)v19 + 1));
        *((_QWORD *)v19 + 1) = 0LL;
        goto LABEL_26;
      }
      if ( (_DWORD)v16 == 36 || (unsigned int)v16 <= 0x21 )
      {
LABEL_39:
        --v20[30];
        goto LABEL_25;
      }
      if ( (_DWORD)v16 == 37 )
      {
        --v20[31];
        goto LABEL_25;
      }
      if ( (_DWORD)v16 != 39 )
        goto LABEL_24;
    }
    else
    {
      if ( (_DWORD)v16 == 86 )
        goto LABEL_36;
      if ( (_DWORD)v16 != 143 )
      {
        if ( (_DWORD)v16 != 144 && (_DWORD)v16 != 157 && (_DWORD)v16 != 164 )
          goto LABEL_24;
LABEL_36:
        --v20[28];
        goto LABEL_25;
      }
    }
    --v20[26];
    goto LABEL_25;
  }
LABEL_26:
  memset_0((void *)(*(_QWORD *)(v17 + 40) + v14 * *(_DWORD *)(v17 + 24)), 0, *(unsigned int *)(v17 + 24));
  return 0;
}
