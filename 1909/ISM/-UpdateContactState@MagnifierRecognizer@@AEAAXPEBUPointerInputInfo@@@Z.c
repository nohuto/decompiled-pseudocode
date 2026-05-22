/*
 * XREFs of ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18010670C
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105420 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801061D8 (--$_Try_emplace@AEBK$$V@-$map@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801066B8 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

void __fastcall MagnifierRecognizer::UpdateContactState(MagnifierRecognizer *this, const struct PointerInputInfo *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r12d
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  unsigned int v8; // edx
  __int64 *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+50h] [rbp-10h]
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0;
  *((_DWORD *)this + 1) = 0;
  v5 = 0;
  if ( *((_DWORD *)a2 + 53) )
  {
    do
    {
      if ( (*((_BYTE *)a2 + 144 * v5 + 228) & 4) != 0 )
      {
        ++*((_DWORD *)this + 1);
        v6 = (__int64 **)((char *)this + 16);
        v7 = (__int64 *)*((_QWORD *)this + 2);
        v8 = *((_DWORD *)a2 + 36 * v5 + 55);
        v9 = (__int64 *)v7[1];
        while ( !*((_BYTE *)v9 + 25) )
        {
          if ( *((_DWORD *)v9 + 8) >= v8 )
          {
            v7 = v9;
            v9 = (__int64 *)*v9;
          }
          else
          {
            v9 = (__int64 *)v9[2];
          }
        }
        if ( v7 == *v6 || v8 < *((_DWORD *)v7 + 8) )
          v7 = *v6;
        if ( v7 == *v6 )
        {
          v10 = *((_QWORD *)a2 + 2);
          *((_QWORD *)&v20 + 1) = 0LL;
          *((_QWORD *)&v19 + 1) = 0LL;
          *(_QWORD *)&v19 = *((_QWORD *)a2 + 18 * v5 + 34);
          v11 = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v22, v10);
          v12 = *((_DWORD *)a2 + 36 * v5 + 55);
          *(_QWORD *)&v20 = v11;
          v21 = v12;
          std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long const &,>(
            (__int64 *)this + 2,
            (__int64)&v17,
            &v21);
          v13 = v17;
          v14 = v20;
          *(_OWORD *)(v17 + 40) = v19;
          *(_OWORD *)(v13 + 56) = v14;
          v8 = *((_DWORD *)a2 + 36 * v5 + 55);
        }
        v21 = v8;
        std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long const &,>(
          (__int64 *)this + 2,
          (__int64)&v18,
          &v21);
        v15 = v18;
        *(_DWORD *)(v18 + 48) = *((_DWORD *)a2 + 36 * v5 + 68);
        *(_DWORD *)(v15 + 52) = *((_DWORD *)a2 + 36 * v5 + 69);
        *(_QWORD *)(v15 + 64) = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v23, *((_QWORD *)a2 + 2));
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 53) );
    v2 = *((_DWORD *)this + 1);
  }
  v16 = *((_DWORD *)this + 2);
  if ( v16 <= v2 )
    v16 = v2;
  *((_DWORD *)this + 2) = v16;
}
