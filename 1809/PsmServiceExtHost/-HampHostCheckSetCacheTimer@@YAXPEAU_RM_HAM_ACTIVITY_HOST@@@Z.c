/*
 * XREFs of ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800185D4
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostCheckSetCacheTimer(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 79);
  if ( (v2 & 0x2000000000000LL) != 0
    && *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 73) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 584) )
  {
    v3 = *((unsigned int *)a1 + 202);
    if ( (_DWORD)v3 != -1 && (v2 & 0x4000000000000LL) == 0 )
    {
      *((_QWORD *)a1 + 79) = v2 | 0x4000000000000LL;
      v4 = -10000 * v3;
      TpSetTimer(*((_QWORD *)a1 + 100), &v4, 0LL, 5000LL);
    }
  }
}
