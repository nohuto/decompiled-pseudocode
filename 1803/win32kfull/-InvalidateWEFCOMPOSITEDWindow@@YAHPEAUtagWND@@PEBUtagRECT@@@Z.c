/*
 * XREFs of ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01B11A4
 * Callers:
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01B1260 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01B1700 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDWindow(struct tagWND *a1, __m128i *a2)
{
  __int64 v2; // rax
  __m128i v4; // xmm0
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  HRGN v8; // rdi
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __m128i v11; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v11 = *a2;
  v4 = v11;
  v6 = *(unsigned int *)(v2 + 92);
  v7 = *(unsigned int *)(v2 + 88);
  v11.m128i_i32[2] += v7;
  v11.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v4);
  v11.m128i_i32[3] += v6;
  v11.m128i_i32[1] += v6;
  v8 = (HRGN)GreCreateRectRgnIndirect(&v11, v7, v6);
  if ( v8 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
    xxxInternalInvalidate(a1, v8, 0x485u);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
    GreDeleteObject(v8);
    return 1;
  }
  return v5;
}
