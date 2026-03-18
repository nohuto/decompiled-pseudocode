/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0023F60
 * Callers:
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024040 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 216;
  v7 = *(unsigned int *)(v2 + 80);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v8 >= (unsigned int)v7 || *(_DWORD *)(v2 + 24) <= 0xD8u) && (v8 <= 0xD8 || *(_DWORD *)(v2 + 24) > 0xD8u) )
  {
    memmove((void *)(v4 + 80), (const void *)(v2 + 80), v7 - 80);
    result = 1LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (int)(*(_DWORD *)(*(_QWORD *)a2 + 40LL) - *(_QWORD *)a2 - 104)
                                        + *(_QWORD *)this
                                        + 104LL;
  }
  else
  {
    if ( (unsigned int)v7 > 0xD8 )
      v6 = *(_DWORD *)(v2 + 80);
    v10 = 0;
    v12 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, v6);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
    if ( v11 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v11, a2);
      v10 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v11);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    return v10;
  }
  return result;
}
