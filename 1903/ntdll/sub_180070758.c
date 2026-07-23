/*
 * XREFs of sub_180070758 @ 0x180070758
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 * Callees:
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180070758(__int64 a1)
{
  __int64 v1; // rax
  _UNICODE_STRING *v3; // rsi
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-138h] BYREF
  _UNICODE_STRING v7; // [rsp+40h] [rbp-128h] BYREF
  _WORD v8[128]; // [rsp+50h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)&v7.Length = 0x1000000;
  v7.Buffer = v8;
  v3 = (_UNICODE_STRING *)(v1 + 72);
  v8[0] = 0;
  v4 = sub_18002E6A0(
         (PUNICODE_STRING)(v1 + 88),
         (PUNICODE_STRING)(v1 + 72),
         *(_DWORD *)(a1 + 32),
         *(_DWORD *)(v1 + 264),
         &v6);
  if ( v6 )
  {
    sub_180070848(a1);
  }
  else
  {
    v4 = sub_180029C14(v3, &v7);
    if ( v4 >= 0 )
      v4 = sub_18002D3B4(a1, &v7);
  }
  if ( v8 != v7.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v7.Buffer);
  return (unsigned int)v4;
}
