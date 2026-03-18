/*
 * XREFs of ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C008A9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTouchpadAcceleration::BuildAccelerationCurve(
        CTouchpadAcceleration *this,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct CDeviceAcceleration::Ballistics *a4)
{
  unsigned int v6; // eax
  __int64 *v7; // r11
  unsigned __int64 v8; // kr00_8
  unsigned int v9; // r9d
  __int64 *v10; // rcx
  char *v11; // r8
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 *v14; // r8
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r10

  if ( *((_BYTE *)this + 8) )
  {
    v6 = qword_1C01CBD28;
    v7 = (__int64 *)((char *)a4 + 144);
    if ( !(_DWORD)qword_1C01CBD28 )
    {
      v6 = *((_DWORD *)this + 24);
      LODWORD(qword_1C01CBD28) = v6;
    }
    v8 = (unsigned __int64)v6 << 16;
    if ( !__CFSHR__(HIDWORD(qword_1C01CBD28), 7) )
      a3 = a2;
    if ( a3 < 0x60u )
    {
      if ( __CFSHR__(HIDWORD(qword_1C01CBD28), 7) )
        a3 = a2;
      if ( a3 < 0x60u )
        a3 = 96;
    }
    v9 = 0;
    v10 = v7 + 5;
    v11 = (char *)(this - (CTouchpadAcceleration *)v7);
    do
    {
      ++v9;
      *v10 = (__int64)(v8
                     / 0xA
                     * ((__int64)(((unsigned __int64)a3 << 16) / 0x78 * *(__int64 *)((char *)v10 + (_QWORD)v11 + 16)) >> 16)) >> 16;
      v12 = 229376 * *(__int64 *)((char *)v10++ + (_QWORD)v11 - 24);
      *(v10 - 6) = v12 >> 16;
    }
    while ( v9 < 5 );
    v13 = 1;
    v14 = v7 + 10;
    do
    {
      v15 = *(v14 - 10);
      v16 = *(v14 - 9) - v15;
      if ( v16 )
      {
        v17 = *(v14 - 5);
        v18 = ((*(v14 - 4) - v17) << 16) / v16;
        v19 = v17 - ((v15 * v18) >> 16);
      }
      else
      {
        v19 = 0LL;
        v18 = 0LL;
      }
      *v14 = v18;
      ++v13;
      v14[4] = v19;
      ++v14;
    }
    while ( v13 < 5 );
  }
}
