/*
 * XREFs of ?ivRootDeliverMouseInput@CMouseSensor@@MEAAJAEAUCONTAINER_ID@@PEAX@Z @ 0x1C01877C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0187378 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 */

__int64 __fastcall CMouseSensor::ivRootDeliverMouseInput(CMouseSensor *this, struct CONTAINER_ID *a2, char *a3)
{
  const struct CONTAINER_ID *v4; // r11
  CMouseSensor *v5; // r10
  int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // edi
  unsigned int v9; // esi
  char v10; // r8
  char *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // eax
  int v16; // [rsp+38h] [rbp-30h]
  struct CONTAINER_ID *v17; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v18[12]; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+54h] [rbp-14h]
  struct CONTAINER_ID *v21; // [rsp+B8h] [rbp+50h]
  char v22; // [rsp+C0h] [rbp+58h]
  struct CONTAINER_ID *v23; // [rsp+C8h] [rbp+60h]

  v21 = a2;
  v4 = a2;
  v5 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      10,
      (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids);
    v5 = this;
    v4 = v21;
  }
  v6 = 0;
  if ( *((_DWORD *)v5 + 298) )
  {
    v7 = *(_QWORD *)a3;
    v8 = 1;
    v9 = *((_DWORD *)a3 + 2);
    a2 = *(struct CONTAINER_ID **)a3;
    v23 = *(struct CONTAINER_ID **)a3;
    v10 = 0;
    v22 = 0;
    v11 = *(char **)(*(_QWORD *)a3 + 24LL);
    if ( v9 )
    {
      do
      {
        v12 = 56LL * v8;
        v13 = v12 + v7;
        if ( *(char **)(v12 + v7 + 24) != v11 || v8 == v9 )
        {
          v17 = a2;
          LOBYTE(v16) = 0;
          *(_DWORD *)&v18[8] = 0;
          *(_QWORD *)v18 = (unsigned int)((v7 + v12 - (__int64)a2) / 56);
          v19 = v16;
          if ( !v10 && a3[20] )
          {
            v14 = *((_DWORD *)a3 + 5);
            *(_QWORD *)&v18[4] = *(_QWORD *)(a3 + 12);
            v19 = v14;
            v22 = 1;
          }
          v6 = CMouseSensor::SendMouseInputToContainer(v5, v4, v11, (const struct ContainerMouseInput *)&v17);
          if ( v6 < 0 )
            break;
          v5 = this;
          v10 = v22;
          if ( v8 == v9 )
          {
            a2 = v23;
          }
          else
          {
            v11 = *(char **)(v13 + 24);
            a2 = (struct CONTAINER_ID *)v13;
            v23 = (struct CONTAINER_ID *)v13;
          }
        }
        v9 = *((_DWORD *)a3 + 2);
        ++v8;
        v4 = v21;
      }
      while ( v8 <= v9 );
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      11,
      (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids);
  }
  return (unsigned int)v6;
}
