/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D5D48
 * Callers:
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  __int64 v4; // r8
  _QWORD *v5; // r15
  char *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 *v8; // r14
  bool i; // zf
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  signed __int64 v13; // rbx

  v3 = (_QWORD *)Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v5 = v3;
  if ( v3 )
  {
    v6 = (char *)a1 + 32;
    v7 = *((_QWORD *)a1 + 4);
    v8 = (__int64 *)((char *)a1 + 32);
    while ( v7 != 1 )
    {
      LOBYTE(v2) = 1;
      v2 = HMValidateHandleNoSecure(v7, v2, v4);
      for ( i = v2 == 0; !i; i = v2 == 0 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v2 + 136) + 8LL);
        if ( (*(_BYTE *)(v4 + 10) & 1) != 0 || *(_WORD *)v4 == *(_WORD *)(gpsi + 898LL) )
          goto LABEL_9;
        v2 = *(_QWORD *)(v2 + 120);
      }
      v2 = 0LL;
LABEL_9:
      v10 = *v8;
      if ( v2 )
      {
        *v5++ = v10;
      }
      else
      {
        *(_QWORD *)v6 = v10;
        v6 += 8;
      }
      v7 = *++v8;
    }
    *v5 = 0LL;
    v11 = v3;
    v12 = *v3;
    if ( *v3 )
    {
      v13 = v6 - (char *)v3;
      do
      {
        *(__int64 *)((char *)v11++ + v13) = v12;
        v12 = *v11;
      }
      while ( *v11 );
    }
    Win32FreePool(v3);
  }
  return a1;
}
