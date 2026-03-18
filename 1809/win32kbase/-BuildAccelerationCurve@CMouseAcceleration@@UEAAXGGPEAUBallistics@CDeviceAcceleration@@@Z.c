/*
 * XREFs of ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C008A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C008A6E0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

void __fastcall CMouseAcceleration::BuildAccelerationCurve(
        CMouseAcceleration *this,
        unsigned __int16 a2,
        __int64 a3,
        struct CDeviceAcceleration::Ballistics *a4)
{
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO *v7; // rcx
  unsigned __int64 v8; // kr00_8
  unsigned __int16 v9; // ax
  unsigned int v10; // r8d
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 *v16; // r8
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9

  if ( *((_BYTE *)this + 8) )
  {
    v7 = (CMouseAcceleration *)((char *)this + 104);
    if ( (unsigned int)(*(_DWORD *)v7 - 1) <= 0x13 )
    {
      v8 = (unsigned __int64)CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(v7) << 16;
      v9 = 96;
      if ( a2 >= 0x60u )
        v9 = a2;
      v10 = 0;
      v11 = (__int64 *)((char *)a4 + 40);
      v12 = ((unsigned __int64)v9 << 16) / 0x78;
      v13 = this - a4;
      do
      {
        ++v10;
        *v11 = (__int64)(v8 / 0xA * ((__int64)(v12 * *(__int64 *)((char *)v11 + v13 + 16)) >> 16)) >> 16;
        v14 = 229376 * *(__int64 *)((char *)v11++ + v13 - 24);
        *(v11 - 6) = v14 >> 16;
      }
      while ( v10 < 5 );
      v15 = 1;
      v16 = (__int64 *)((char *)a4 + 80);
      do
      {
        v17 = *(v16 - 10);
        v18 = *(v16 - 9) - v17;
        if ( v18 )
        {
          v19 = *(v16 - 5);
          v20 = ((*(v16 - 4) - v19) << 16) / v18;
          v21 = v19 - ((v17 * v20) >> 16);
        }
        else
        {
          v21 = 0LL;
          v20 = 0LL;
        }
        *v16 = v20;
        ++v15;
        v16[4] = v21;
        ++v16;
      }
      while ( v15 < 5 );
    }
  }
}
