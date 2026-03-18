/*
 * XREFs of ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C00E1A60
 * Callers:
 *     NtGdiSetMetaRgn @ 0x1C00E1A00 (NtGdiSetMetaRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall DC::iSetMetaRgn(DC *this)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+28h] [rbp-8h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  v2 = *((_QWORD *)this + 20);
  if ( *((_QWORD *)this + 21) )
  {
    v10 = *((_QWORD *)this + 21);
    if ( !v2 )
      return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v10);
    v11 = v2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
    if ( !v8 )
    {
      if ( v9 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
      return v1;
    }
    v6 = RGNOBJ::iCombine((RGNOBJ *)&v8, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v11, 1);
    if ( v6 )
    {
      ++*(_DWORD *)(v8 + 32);
      *((_QWORD *)this + 21) = v8;
      if ( !--*(_DWORD *)(v10 + 32) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      v7 = v11;
      *((_QWORD *)this + 20) = 0LL;
      --*(_DWORD *)(v7 + 32);
      if ( !*(_DWORD *)(v11 + 32) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      DC::vReleaseRao(this);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    if ( v9 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    return v6;
  }
  else if ( v2 )
  {
    v10 = *((_QWORD *)this + 20);
    result = RGNOBJ::iComplexity((RGNOBJ *)&v10);
    *((_QWORD *)this + 21) = v5;
    *((_QWORD *)this + 20) = 0LL;
  }
  else
  {
    return 2LL;
  }
  return result;
}
