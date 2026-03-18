/*
 * XREFs of ?MulRenderHint@@YAJPEAUDHPDEV__@@K_KPEAX@Z @ 0x1C0273AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulRenderHint(struct DHPDEV__ *a1, unsigned int a2, __int64 a3, __int64 **a4)
{
  _QWORD *v4; // rbx
  int v8; // esi
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD, _QWORD, __int64, __int64 **); // r11
  __int64 **v12; // r9
  __int64 v13; // r8
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD **)a1;
  v8 = 0;
  v9 = -1073741822;
  while ( v4 )
  {
    v10 = v4[6];
    v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 **))(v10 + 3424);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v10 + 1816) & 0x8000000) != 0 )
      {
        v12 = a4;
      }
      else
      {
        if ( v8 )
          goto LABEL_11;
        v8 = 1;
        v12 = a4;
        if ( a2 - 65542 <= 1 && *((_WORD *)*a4 + 38) == 3 )
        {
          v13 = **a4;
          v12 = (__int64 **)v15;
          v15[0] = **(_QWORD **)(v13 + 8);
          v15[1] = *(_QWORD *)(**(_QWORD **)(v13 + 8) + 8LL);
          v15[2] = a4[2];
        }
      }
      v9 = v11(*(_QWORD *)(v10 + 1792), a2, a3, v12);
    }
    else
    {
      v9 = -1073741822;
    }
LABEL_11:
    v4 = (_QWORD *)*v4;
  }
  return v9;
}
