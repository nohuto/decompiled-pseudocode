/*
 * XREFs of ?CorrectColors@XEPALOBJ@@QEAAXPEAUtagPALETTEENTRY@@K@Z @ 0x1C0264438
 * Callers:
 *     PALOBJ_cGetColors @ 0x1C028B4E0 (PALOBJ_cGetColors.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::CorrectColors(XEPALOBJ *this, struct tagPALETTEENTRY *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  BYTE *p_peBlue; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  BYTE v8; // cl
  __int64 v9; // rax

  v3 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 1680);
    if ( v4 )
    {
      if ( a3 )
      {
        p_peBlue = &a2->peBlue;
        v6 = a3;
        do
        {
          v7 = *(p_peBlue - 1);
          *(p_peBlue - 2) = *(_BYTE *)(v4 + 2LL * *(p_peBlue - 2) + 1);
          v8 = *(_BYTE *)(v4 + 2 * v7 + 513);
          v9 = *p_peBlue;
          *(p_peBlue - 1) = v8;
          *p_peBlue = *(_BYTE *)(v4 + 2 * v9 + 1025);
          p_peBlue += 4;
          --v6;
        }
        while ( v6 );
      }
    }
  }
}
