/*
 * XREFs of AudioServerInitialize @ 0x180028960
 * Callers:
 *     <none>
 * Callees:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180028320 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 */

__int64 __fastcall AudioServerInitialize(
        void *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        void **a9)
{
  return AudioServerInitialize_Internal(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, a9);
}
