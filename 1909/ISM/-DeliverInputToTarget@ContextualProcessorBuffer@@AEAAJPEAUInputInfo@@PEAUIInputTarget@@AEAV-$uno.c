/*
 * XREFs of ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@PEAUIInputTarget@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800FA738
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA050 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::DeliverInputToTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( *(_DWORD *)a2 == 4096 && *(_BYTE *)(a2 + 133) )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 104);
  if ( !v5 )
  {
    if ( a3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    return 0LL;
  }
  if ( a3 == *(_QWORD *)(a1 + 96) && *(_QWORD *)(a4 + 16) )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2, a4);
  else
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
}
