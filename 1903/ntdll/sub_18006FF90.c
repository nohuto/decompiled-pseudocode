/*
 * XREFs of sub_18006FF90 @ 0x18006FF90
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 */

__int64 __fastcall sub_18006FF90(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // edi
  __int64 v8; // rax
  _WORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 672) & 1) != 0 )
    return (unsigned int)-1073741823;
  v4 = qword_1801636A0[0];
  if ( LODWORD(qword_1801636A0[0]) <= 1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
    if ( *(_QWORD *)(a1 + 8 * v3 + 2224) )
    {
      v7 = -1073741302;
    }
    else
    {
      v5 = (unsigned int)(v4 - 1);
      v6 = v5;
      v7 = sub_18007013C(a1, 192 * v5, &v13);
      if ( v7 >= 0 )
      {
        v8 = v13;
        if ( (_DWORD)v5 )
        {
          v9 = (_WORD *)(v13 + 172);
          v10 = (_QWORD *)v13;
          v11 = a1 + 3312;
          do
          {
            *v10 = v11;
            v11 += 48LL;
            *v9 = v3;
            v10 += 24;
            v9 += 96;
            --v6;
          }
          while ( v6 );
        }
        *(_QWORD *)(a1 + 8 * v3 + 2224) = v8;
      }
    }
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
  }
  return (unsigned int)v7;
}
