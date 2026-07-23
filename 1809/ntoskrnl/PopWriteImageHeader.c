/*
 * XREFs of PopWriteImageHeader @ 0x14057E740
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     tcpxsum @ 0x1401C51F0 (tcpxsum.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 */

__int64 (*__fastcall PopWriteImageHeader(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int128 v16; // xmm1
  __int64 (*result)(void); // rax

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  v8 = __rdtsc();
  qword_140418C50 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_140418E14 = ((unsigned int)dword_1404188E0 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  for ( qword_140418C80 = PerformanceCounter.QuadPart;
        v10 < *(_DWORD *)(a1 + 256);
        qword_140418C60 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 80) )
  {
    v11 = v10++;
    v11 <<= 7;
    qword_140418DE0 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 56);
    qword_140418C58 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 40);
  }
  qword_140418DF0 = qword_140418E08;
  qword_140418E00 = (unsigned int)dword_140418E10;
  qword_140418E08 += qword_140418DE8;
  v12 = qword_140418DD8;
  dword_140418E10 += qword_140418DF8;
  *(_QWORD *)(a2 + 88) = qword_140418DD8;
  if ( byte_140418901 )
    *(_QWORD *)(a2 + 88) = qword_140418DE0 + v12;
  v13 = 3LL;
  v14 = a2 + 136;
  v15 = &qword_140418C38;
  do
  {
    *(_OWORD *)v14 = *(_OWORD *)v15;
    *(_OWORD *)(v14 + 16) = *((_OWORD *)v15 + 1);
    *(_OWORD *)(v14 + 32) = *((_OWORD *)v15 + 2);
    *(_OWORD *)(v14 + 48) = *((_OWORD *)v15 + 3);
    *(_OWORD *)(v14 + 64) = *((_OWORD *)v15 + 4);
    *(_OWORD *)(v14 + 80) = *((_OWORD *)v15 + 5);
    *(_OWORD *)(v14 + 96) = *((_OWORD *)v15 + 6);
    v14 += 128LL;
    v16 = *((_OWORD *)v15 + 7);
    v15 += 16;
    *(_OWORD *)(v14 - 16) = v16;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)v14 = *(_OWORD *)v15;
  *(_OWORD *)(v14 + 16) = *((_OWORD *)v15 + 1);
  *(_OWORD *)(v14 + 32) = *((_OWORD *)v15 + 2);
  *(_OWORD *)(v14 + 48) = *((_OWORD *)v15 + 3);
  *(_OWORD *)(v14 + 64) = *((_OWORD *)v15 + 4);
  *(_OWORD *)(v14 + 80) = *((_OWORD *)v15 + 5);
  *(_OWORD *)(v14 + 96) = *((_OWORD *)v15 + 6);
  *(_QWORD *)(v14 + 112) = v15[14];
  *(_DWORD *)a2 = 1380075848;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x3E0u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(__int64 (**)(void))(*(_QWORD *)(a1 + 168) + 72LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
