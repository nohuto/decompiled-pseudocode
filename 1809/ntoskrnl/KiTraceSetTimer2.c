/*
 * XREFs of KiTraceSetTimer2 @ 0x14029BC80
 * Callers:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KiUpdateTimer2Flags @ 0x1400FB3AC (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiTraceCancelTimer2 @ 0x14029BAC0 (KiTraceCancelTimer2.c)
 */

void __fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  char v7; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  char v12; // cl
  char v13; // dl
  char v14; // cl
  _QWORD *v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h]
  int v17; // [rsp+3Ch] [rbp-44h]
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  unsigned __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  char v23; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_BYTE *)(a1 + 129);
  v18[0] = *(_QWORD *)(a1 + 72);
  v18[1] = *(_QWORD *)(a1 + 80);
  v19 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock(&KiTimer2CollectionLock);
  v9 = __ROL8__(v4 ^ KiWaitNever, KiWaitNever);
  v10 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever));
  v11 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v9);
  if ( a2 )
    KiTraceCancelTimer2(a1, v11);
  v21 = v11;
  v20 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v11 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
  v22 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v10 ^ KiWaitAlways), KiWaitNever));
  v12 = (2 * (v7 & 2)) | 8;
  if ( (v7 & 4) == 0 )
    v12 = 2 * (v7 & 2);
  v13 = v12;
  v14 = v12 | 0x10;
  if ( (v7 & 8) == 0 )
    v14 = v13;
  v23 = v14;
  if ( v11 )
  {
    v14 |= 1u;
    v23 = v14;
  }
  if ( v19 )
    v23 = v14 | 2;
  v17 = 0;
  v15 = v18;
  v16 = 56;
  EtwTraceKernelEvent((__int64)&v15, 1u, 0x40020000u, 0xF68u, 0x601B02u);
}
