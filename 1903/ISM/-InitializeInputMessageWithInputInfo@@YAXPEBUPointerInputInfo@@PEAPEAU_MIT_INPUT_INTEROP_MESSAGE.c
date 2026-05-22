/*
 * XREFs of ?InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BCCE8
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBC90 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800BC380 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CECC (--_U@YAPEAX_K@Z.c)
 */

void __fastcall InitializeInputMessageWithInputInfo(
        const struct PointerInputInfo *a1,
        struct _MIT_INPUT_INTEROP_MESSAGE **a2)
{
  size_t v4; // rbx
  _DWORD *v5; // rdi
  __int64 v6; // r8
  _OWORD *v7; // rax
  _OWORD *v8; // rdx

  v4 = (unsigned int)(240 * (*((_DWORD *)a1 + 53) - 1) + 288);
  v5 = operator new[](v4);
  memset_0(v5, 0, (unsigned int)v4);
  v6 = 0LL;
  *v5 = 0;
  v5[11] = *((_DWORD *)a1 + 53);
  *(_OWORD *)(v5 + 2) = *((_OWORD *)a1 + 6);
  for ( *(_OWORD *)(v5 + 6) = *((_OWORD *)a1 + 7); (unsigned int)v6 < *((_DWORD *)a1 + 53); v8[11] = v7[8] )
  {
    v7 = (_OWORD *)((char *)a1 + 144 * v6 + 216);
    v8 = &v5[60 * (unsigned int)v6];
    v6 = (unsigned int)(v6 + 1);
    v8[3] = *v7;
    v8[4] = v7[1];
    v8[5] = v7[2];
    v8[6] = v7[3];
    v8[7] = v7[4];
    v8[8] = v7[5];
    v8[9] = v7[6];
    v8[10] = v7[7];
  }
  *a2 = (struct _MIT_INPUT_INTEROP_MESSAGE *)v5;
}
