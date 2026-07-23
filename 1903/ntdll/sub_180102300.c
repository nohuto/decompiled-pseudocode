/*
 * XREFs of sub_180102300 @ 0x180102300
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     RtlQueryHeapInformation @ 0x180067610 (RtlQueryHeapInformation.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_180102300(LPCGUID a1, int a2)
{
  signed __int32 *v2; // rax
  signed __int32 *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+40h] [rbp-48h] BYREF
  int HeapInformation; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall *v9)(void *, size_t); // [rsp+60h] [rbp-28h]
  signed __int32 *v10; // [rsp+68h] [rbp-20h]

  if ( a2 == 2 )
  {
    v5 = xmmword_1801638B0;
    v2 = (signed __int32 *)sub_18004CF00(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&dword_180166A40);
      memset(v2 + 1, 0, 0x400CuLL);
      *v3 = v4;
      v8 = -1LL;
      HeapInformation = 2;
      v10 = v3;
      v9 = sub_1801023D0;
      RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &HeapInformation, 0x28uLL, 0LL);
      v6 = xmmword_1801638B0;
      sub_18004F690((__int64)v3, &v6);
    }
  }
}
