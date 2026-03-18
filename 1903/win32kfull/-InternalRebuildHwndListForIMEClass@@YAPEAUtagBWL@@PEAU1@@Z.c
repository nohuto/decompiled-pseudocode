/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D5ED8
 * Callers:
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r15
  char *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 *v9; // r14
  bool i; // zf
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // rbx

  v3 = (_QWORD *)Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v6 = v3;
  if ( v3 )
  {
    v7 = (char *)a1 + 32;
    v8 = *((_QWORD *)a1 + 4);
    v9 = (__int64 *)((char *)a1 + 32);
    while ( v8 != 1 )
    {
      LOBYTE(v2) = 1;
      v2 = HMValidateHandleNoSecure(v8, v2, v4, v5);
      for ( i = v2 == 0; !i; i = v2 == 0 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v2 + 136) + 8LL);
        if ( (*(_BYTE *)(v4 + 10) & 1) != 0 || *(_WORD *)v4 == *(_WORD *)(gpsi + 898LL) )
          goto LABEL_9;
        v2 = *(_QWORD *)(v2 + 120);
      }
      v2 = 0LL;
LABEL_9:
      v11 = *v9;
      if ( v2 )
      {
        *v6++ = v11;
      }
      else
      {
        *(_QWORD *)v7 = v11;
        v7 += 8;
      }
      v8 = *++v9;
    }
    *v6 = 0LL;
    v12 = v3;
    v13 = *v3;
    if ( *v3 )
    {
      v14 = v7 - (char *)v3;
      do
      {
        *(__int64 *)((char *)v12++ + v14) = v13;
        v13 = *v12;
      }
      while ( *v12 );
    }
    Win32FreePool(v3);
  }
  return a1;
}
