/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C00E4FB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void __fastcall QueryTrueTypeTableRequest::CaptureUsermodeParameters(QueryTrueTypeTableRequest *this, int *a2)
{
  const void *v3; // r9
  _QWORD *v4; // rax
  _DWORD *v5; // r8
  size_t v6; // rdi
  _QWORD *v7; // rdx
  _DWORD *v9; // rcx

  v3 = (const void *)*((_QWORD *)a2 + 3);
  v4 = (_QWORD *)*((_QWORD *)a2 + 4);
  v5 = (_DWORD *)*((_QWORD *)a2 + 5);
  v6 = a2[12];
  if ( (v6 & 0x80000000) == 0LL
    && ((unsigned int)v6 <= *((_DWORD *)this + 15) || !*((_QWORD *)this + 8))
    && v3 == *((const void **)this + 12) )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 9);
    if ( v7 ? v4 == *((_QWORD **)this + 13) : v4 == 0LL )
    {
      v9 = (_DWORD *)*((_QWORD *)this + 10);
      if ( v9 ? v5 == *((_DWORD **)this + 14) : v5 == 0LL )
      {
        if ( *((_QWORD *)this + 8) )
        {
          memmove(*((void **)this + 8), v3, v6);
        }
        else
        {
          if ( v7 )
          {
            *v7 = *v4;
            v9 = (_DWORD *)*((_QWORD *)this + 10);
          }
          if ( v9 )
            *v9 = *v5;
        }
        *((_DWORD *)this + 22) = v6;
      }
    }
  }
}
