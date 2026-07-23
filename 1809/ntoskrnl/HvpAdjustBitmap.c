/*
 * XREFs of HvpAdjustBitmap @ 0x1405A6024
 * Callers:
 *     HvpAdjustHiveFreeDisplay @ 0x1405A5FA8 (HvpAdjustHiveFreeDisplay.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, unsigned int *a3)
{
  _RTL_BITMAP *v3; // r14
  unsigned int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 SizeOfBitMap; // rdx
  unsigned int *v10; // rax
  unsigned int *v11; // rbp
  unsigned int *Buffer; // r15

  v3 = (_RTL_BITMAP *)(a3 + 2);
  v4 = a2 >> 12;
  v7 = 256;
  if ( (a2 >> 12) + 7 < 8 )
    v8 = 256;
  else
    v8 = ((((a2 >> 12) + 7) >> 3) + 255) & 0xFFFFFF00;
  SizeOfBitMap = v3->SizeOfBitMap;
  if ( (_DWORD)SizeOfBitMap )
  {
    if ( (unsigned int)(SizeOfBitMap + 7) >= 8 )
      v7 = (((unsigned int)(SizeOfBitMap + 7) >> 3) + 255) & 0xFFFFFF00;
  }
  else
  {
    v7 = 0;
  }
  if ( v8 <= *a3 )
  {
    v3->SizeOfBitMap = v4;
    if ( (unsigned int)SizeOfBitMap < v4 )
      RtlClearBits(v3, SizeOfBitMap, v4 - SizeOfBitMap);
    return 0LL;
  }
  LOBYTE(SizeOfBitMap) = 1;
  v10 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v8, SizeOfBitMap, 959663427LL);
  v11 = v10;
  if ( v10 )
  {
    *a3 = v8;
    Buffer = v3->Buffer;
    memset(v10, 0, v8);
    v3->SizeOfBitMap = v4;
    v3->Buffer = v11;
    if ( Buffer )
    {
      memmove(v11, Buffer, v7);
      (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(Buffer, v7);
    }
    return 0LL;
  }
  return 3221225626LL;
}
