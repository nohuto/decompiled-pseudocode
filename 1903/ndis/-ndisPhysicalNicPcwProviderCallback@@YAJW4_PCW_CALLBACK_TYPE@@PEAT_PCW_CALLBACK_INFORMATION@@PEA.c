/*
 * XREFs of ?ndisPhysicalNicPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C011A850
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF3B4 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 */

__int64 __fastcall ndisPhysicalNicPcwProviderCallback(
        enum _PCW_CALLBACK_TYPE a1,
        union _PCW_CALLBACK_INFORMATION *a2,
        void *a3)
{
  if ( (_DWORD)a3 != 3 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 0LL;
  return ndisPcwCollectPhysicalData(a2->EnumerateInstances.Buffer);
}
