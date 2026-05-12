/*
 * XREFs of RaidAdapterTargetedRescan @ 0x1C0025C50
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0017760 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017D34 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00183A0 (RaidBusEnumeratorGetLunList.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     McTemplateK0zqquuuqpp @ 0x1C0036C00 (McTemplateK0zqquuuqpp.c)
 */

__int64 __fastcall RaidAdapterTargetedRescan(__int64 a1, int a2, __int64 *a3, char a4)
{
  _BYTE *v4; // r14
  unsigned int v5; // r15d
  unsigned int v6; // esi
  unsigned __int8 v10; // di
  int v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  struct _RTL_BITMAP *v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  unsigned int v17; // [rsp+60h] [rbp-A0h]
  _QWORD v18[32]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *(_BYTE **)(a1 + 5000);
  v5 = 0;
  v6 = 0;
  v10 = v4[8];
  LOBYTE(v17) = v10;
  if ( Microsoft_Windows_StorPortEnableBits < 0 )
    McTemplateK0zqquuuqpp(
      a1,
      a2,
      (_DWORD)a3,
      *(_QWORD *)(a1 + 48),
      *(_DWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 4988),
      v10,
      v4[9],
      v4[10],
      *(_DWORD *)(a1 + 4992),
      *(_QWORD *)(a1 + 5008),
      *(_QWORD *)(a1 + 5016));
  if ( (*(_DWORD *)(a1 + 4988) & 4) != 0 )
  {
    v5 = *(unsigned __int8 *)(a1 + 417);
    if ( *(_QWORD *)(a1 + 5040) )
    {
      v14 = (struct _RTL_BITMAP *)(a1 + 5024);
      if ( (*(_DWORD *)(a1 + 4992) & 1) != 0 )
        RtlSetBit(v14, v10);
      else
        RtlClearBit(v14, v10);
    }
  }
  if ( a4 == 1 )
    return 0LL;
  v11 = *(_DWORD *)(a1 + 4988);
  if ( (v11 & 2) != 0 )
  {
    v12 = (unsigned __int8)v4[9];
    v5 = v12 + 1;
  }
  else
  {
    v12 = 0;
    if ( (v11 & 1) != 0 )
    {
      *(_WORD *)((char *)&v17 + 1) = *(_WORD *)(v4 + 9);
      HIBYTE(v17) = 0;
      return RaidBusEnumeratorVisitUnit(a3, v17);
    }
  }
  v15 = *(unsigned __int8 *)(a1 + 466);
  memset(v18, 1, 0xFFuLL);
  while ( 1 )
  {
    if ( v12 >= v5 )
      return v6;
    HIBYTE(v17) = 0;
    BYTE1(v17) = v12;
    result = RaidBusEnumeratorGetLunList((__int64)a3, (unsigned __int16)v17, v18);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    v16 = 0LL;
    if ( v15 )
      break;
LABEL_21:
    ++v12;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)v18 + v16) )
    {
      BYTE2(v17) = v16;
      result = RaidBusEnumeratorVisitUnit(a3, v17);
      v6 = result;
      if ( (int)result < 0 )
        return result;
    }
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v15 )
      goto LABEL_21;
  }
}
