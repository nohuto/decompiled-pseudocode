/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C00A2A60
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     DoesMsgNeedDPITransform @ 0x1C0110DA0 (DoesMsgNeedDPITransform.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  __int64 *v8; // r13
  unsigned int v9; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v11; // esi
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 CurrentProcessWin32Process; // rax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rsi
  int v22; // edi
  int v23; // edi
  int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-48h] BYREF
  int v39; // [rsp+40h] [rbp-40h]
  __int64 v40; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-30h]
  __int64 v42; // [rsp+58h] [rbp-28h] BYREF
  __int64 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+68h] [rbp-18h] BYREF
  __int64 v45; // [rsp+70h] [rbp-10h]

  v6 = 0;
  v41 = (__int64 *)a3;
  v8 = (__int64 *)a3;
  v39 = a2;
  v9 = a1;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, (__int64)a4);
  v37 = CurrentThreadDpiAwarenessContext;
  if ( a6 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 18;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v16 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v16 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v16 + 340) )
          {
            v11 = *(_DWORD *)(v16 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14);
            if ( CurrentProcessWin32Process )
              v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v16 + 328) & 8) != 0 && (v11 & 0xF) == 2 && (v11 & 0xF0) == 0x20 )
            v11 |= 0x20000000u;
        }
      }
    }
    v8 = v41;
  }
  if ( (((unsigned __int16)(v37 >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
  {
    v18 = (v37 & 0xF) == 2 && (v37 & 0x20000000) != 0;
    v19 = (v11 & 0xF) == 2 && (v11 & 0x20000000) != 0;
    if ( v18 == v19 )
      return 0LL;
  }
  v20 = *(_QWORD *)a4;
  if ( !(unsigned int)DoesMsgNeedDPITransform(v9, v37, *(_QWORD *)a4) )
    return 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( !v39 || v9 - 132 <= 0x19B )
    goto LABEL_50;
  if ( v9 == 834 )
    goto LABEL_49;
  if ( v9 <= 0x220 )
  {
    if ( v9 == 544 )
    {
      v44 = *(_QWORD *)(v20 + 24);
      LODWORD(v45) = *(_DWORD *)(v20 + 32) + *(_DWORD *)(v20 + 24);
      HIDWORD(v45) = *(_DWORD *)(v20 + 36) + *(_DWORD *)(v20 + 28);
      v6 = TransformRectBetweenCoordinateSpaces(&v42, &v44, a5, a6);
      *(_QWORD *)(v20 + 24) = v42;
      *(_DWORD *)(v20 + 32) = v43 - v42;
      *(_DWORD *)(v20 + 36) = HIDWORD(v43) - HIDWORD(v42);
      goto LABEL_77;
    }
    if ( v9 >= 0x46 )
    {
      if ( v9 <= 0x47 )
      {
        v44 = *(_QWORD *)(v20 + 16);
        LODWORD(v45) = *(_DWORD *)(v20 + 24) + *(_DWORD *)(v20 + 16);
        HIDWORD(v45) = *(_DWORD *)(v20 + 28) + *(_DWORD *)(v20 + 20);
        v6 = TransformRectBetweenCoordinateSpaces(&v42, &v44, a5, a6);
        *(_QWORD *)(v20 + 16) = v42;
        *(_DWORD *)(v20 + 24) = v43 - v42;
        *(_DWORD *)(v20 + 28) = HIDWORD(v43) - HIDWORD(v42);
      }
      else
      {
        if ( v9 == 83 )
          return (unsigned int)TransformPointBetweenCoordinateSpaces(v20 + 32, v20 + 32, a5, a6);
        if ( v9 == 131 )
        {
          if ( *v8 )
          {
            v22 = TransformRectBetweenCoordinateSpaces(v20, v20, a5, a6);
            v23 = TransformRectBetweenCoordinateSpaces(v20 + 16, v20 + 16, a5, a6) | v22;
            v24 = TransformRectBetweenCoordinateSpaces(v20 + 32, v20 + 32, a5, a6);
            v25 = *(_QWORD *)(v20 + 48);
            v44 = *(_QWORD *)(v25 + 16);
            LODWORD(v45) = *(_DWORD *)(v25 + 24) + *(_DWORD *)(v25 + 16);
            HIDWORD(v45) = *(_DWORD *)(v25 + 28) + *(_DWORD *)(v25 + 20);
            v6 = TransformRectBetweenCoordinateSpaces(&v42, &v44, a5, a6) | v24 | v23;
            *(_QWORD *)(v25 + 16) = v42;
            *(_DWORD *)(v25 + 24) = v43 - v42;
            *(_DWORD *)(v25 + 28) = HIDWORD(v43) - HIDWORD(v42);
          }
          else
          {
            return (unsigned int)TransformRectBetweenCoordinateSpaces(v20, v20, a5, a6);
          }
          return v6;
        }
      }
    }
    goto LABEL_50;
  }
  if ( v9 == 643 )
  {
    v27 = *v8;
    if ( (unsigned __int64)(*v8 - 7) <= 1 )
    {
      v28 = TransformPointBetweenCoordinateSpaces(v20 + 8, v20 + 8, a5, a6);
      v29 = v20 + 16;
    }
    else
    {
      if ( (unsigned __int64)(v27 - 11) > 1 )
      {
        if ( v27 == 16 )
        {
          LODWORD(v35) = (__int16)v20;
          HIDWORD(v35) = a4[1];
          v6 = TransformPointBetweenCoordinateSpaces(&v36, &v35, a5, a6);
          *a4 = v36;
          a4[1] = WORD2(v36);
        }
        goto LABEL_77;
      }
      v28 = TransformPointBetweenCoordinateSpaces(v20 + 4, v20 + 4, a5, a6);
      v29 = v20 + 12;
    }
    v6 = TransformRectBetweenCoordinateSpaces(v29, v29, a5, a6) | v28;
LABEL_77:
    switch ( v9 )
    {
      case 0x20Au:
      case 0x20Eu:
      case 0x241u:
      case 0x242u:
      case 0x243u:
      case 0x245u:
      case 0x246u:
      case 0x247u:
      case 0x249u:
      case 0x24Au:
      case 0x24Eu:
      case 0x24Fu:
      case 0x251u:
      case 0x252u:
      case 0x2A0u:
      case 0x2F2u:
      case 0x2F3u:
      case 0x2F4u:
        goto LABEL_60;
      case 0x20Bu:
      case 0x20Cu:
      case 0x20Du:
      case 0x2A1u:
        goto LABEL_81;
      case 0x210u:
        if ( v9 != 528 || *(_WORD *)v8 != 582 )
          goto LABEL_60;
        break;
      default:
        return v6;
    }
    return v6;
  }
  if ( v9 == 833 )
LABEL_49:
    v6 = 1;
LABEL_50:
  if ( v9 == 132 )
    goto LABEL_60;
  if ( v9 > 0x33F )
    return v6;
  if ( v9 > 0x209 )
  {
    if ( v9 > 0x313 )
    {
      if ( v9 == 831 )
      {
        if ( a6 )
        {
          v31 = *(_QWORD *)a4;
          if ( *(_QWORD *)a4 )
          {
            v32 = TransformRectBetweenCoordinateSpaces(v31 + 4, v31 + 4, a5, a6);
            v33 = v31 + 44;
            v34 = 6LL;
            v6 = v32;
            do
            {
              v6 |= TransformRectBetweenCoordinateSpaces(v33, v33, a5, a6);
              v33 += 16LL;
              --v34;
            }
            while ( v34 );
          }
        }
      }
      return v6;
    }
    if ( v9 == 787 )
    {
      if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
        return v6;
      goto LABEL_60;
    }
    goto LABEL_77;
  }
  if ( v9 >= 0x200 )
  {
LABEL_81:
    if ( !a5 )
      return v6;
    v30 = *(_QWORD *)(a5 + 40);
    v38 = 0LL;
    v40 = 0LL;
    LODWORD(v35) = *a4;
    HIDWORD(v35) = (__int16)HIWORD(*(_DWORD *)a4);
    v38 = *(_QWORD *)(v30 + 104);
    TransformPointBetweenCoordinateSpaces(&v40, &v38, a6, a5);
    LODWORD(v35) = v40 + v35;
    HIDWORD(v35) += HIDWORD(v40);
    v6 = TransformPointBetweenCoordinateSpaces(&v36, &v35, a5, a6);
    v26 = ((unsigned __int16)(WORD2(v36) - WORD2(v38)) << 16) | (unsigned __int16)(v36 - v38);
    goto LABEL_61;
  }
  if ( v9 > 0xA9 )
  {
    if ( v9 < 0xAB || v9 > 0xAD && (v9 != 274 || !a4[1]) )
      return v6;
    goto LABEL_60;
  }
  if ( v9 >= 0xA0 )
  {
LABEL_60:
    LODWORD(v35) = *a4;
    HIDWORD(v35) = (__int16)HIWORD(*(_DWORD *)a4);
    v6 = TransformPointBetweenCoordinateSpaces(&v36, &v35, a5, a6);
    v26 = (WORD2(v36) << 16) | (unsigned __int16)v36;
LABEL_61:
    *(_QWORD *)a4 = v26;
    return v6;
  }
  if ( v9 == 3 )
    goto LABEL_81;
  if ( v9 == 123 )
    goto LABEL_60;
  return v6;
}
