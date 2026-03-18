/*
 * XREFs of MiCreateSessionDriverProtos @ 0x14089BC04
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401805AC (MiAddPrivateFixupEntryForSystemImage.c)
 * Callees:
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x140728F20 (MiDeleteSessionDriverProtos.c)
 */

__int64 __fastcall MiCreateSessionDriverProtos(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  ULONG i; // edi
  __int64 v11; // rbp
  __int16 v12; // cx
  _QWORD *v13; // rax
  ULONG v14; // r8d
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-98h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = a2 - *(_QWORD *)(*a1 + 32);
  if ( (int)MiMapImageInSystemSpace(a1, 3, (__int64)v16) < 0 )
    return 0LL;
  v8 = v16[0];
  v9 = (__int64)(a1 + 16);
  for ( i = 0; ; i += v11 )
  {
    if ( !v9 )
    {
      MiUnmapImageInSystemSpace((__int64)v16);
      return 1LL;
    }
    v11 = *(unsigned int *)(v9 + 44);
    v12 = *(_WORD *)(v9 + 32) >> 1;
    if ( (v12 & 4) == 0 && ((MiFlags & 0x8000) != 0 || (MiFlags & 0x10000) == 0 || (v12 & 2) == 0) )
      break;
LABEL_10:
    v9 = *(_QWORD *)(v9 + 16);
    v8 += v11 << 12;
  }
  if ( (int)MiAllocatePerSessionProtos(v9, v8, i, v6, &v15) >= 0 )
  {
    v13 = (_QWORD *)v15;
    *(_DWORD *)(v15 + 64) = 0;
    *v13 = a2;
    v14 = *(_DWORD *)(v9 + 44);
    *(_QWORD *)(v9 + 24) = v13;
    RtlClearBits(*(PRTL_BITMAP *)(a3 + 40), i, v14);
    goto LABEL_10;
  }
  MiUnmapImageInSystemSpace((__int64)v16);
  MiDeleteSessionDriverProtos((__int64)a1);
  return 0LL;
}
