/*
 * XREFs of IopStartNextPacketByKeyEx @ 0x1402844C8
 * Callers:
 *     IoStartNextPacket @ 0x140283B40 (IoStartNextPacket.c)
 *     IoStartNextPacketByKey @ 0x140283B80 (IoStartNextPacketByKey.c)
 * Callees:
 *     IopStartNextPacket @ 0x140284344 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140284404 (IopStartNextPacketByKey.c)
 */

__int64 __fastcall IopStartNextPacketByKeyEx(__int64 a1, ULONG a2, int a3)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax
  __int64 v7; // r9
  int v8; // ecx
  int v9; // edx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 312);
  do
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 56), 1u);
    v7 = *(_QWORD *)(a1 + 312);
    v8 = *(_DWORD *)(v7 + 64);
    if ( v6 + 1 <= 1 )
    {
      *(_DWORD *)(v7 + 64) = v8 & 0xFFFFFF1F;
      v9 = a3 & 0x80;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = 0;
      if ( (a3 & 0x40) != 0 )
      {
        IopStartNextPacketByKey(a1, v9, a2);
      }
      else if ( (a3 & 0x20) != 0 )
      {
        IopStartNextPacket(a1, v9);
      }
    }
    else
    {
      *(_DWORD *)(v7 + 64) = a3 | v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = a2;
    }
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL),
                             0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    v5 = *(_QWORD *)(a1 + 312);
    a2 = *(_DWORD *)(v5 + 60);
    a3 = *(_DWORD *)(v5 + 64) & 0xE0;
  }
  while ( (*(_BYTE *)(v5 + 64) & 0x60) != 0 );
  return result;
}
