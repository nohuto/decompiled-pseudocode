/*
 * XREFs of ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002AA20
 * Callers:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSaveAttributes(XDCOBJ *this)
{
  __int64 v2; // r8
  _OWORD *v3; // rax
  _OWORD *v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_OWORD **)(*(_QWORD *)this + 80LL);
  if ( v3 != (_OWORD *)(*(_QWORD *)this + 552LL) )
  {
    v4 = (_OWORD *)(v2 + 976);
    if ( v3 != (_OWORD *)(v2 + 976) )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v5 = 3LL;
        do
        {
          *v4 = *v3;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          v4[5] = v3[5];
          v4[6] = v3[6];
          v4 += 8;
          *(v4 - 1) = v3[7];
          v3 += 8;
          --v5;
        }
        while ( v5 );
        *v4 = *v3;
        v4[1] = v3[1];
        v2 = *(_QWORD *)this;
      }
      *(_QWORD *)(v2 + 968) = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 976LL;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return 1LL;
}
