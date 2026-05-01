/*
 * XREFs of ??_ECDropFeedback@@UEAAPEAXI@Z @ 0x1803D4C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1CDropFeedback@@UEAA@XZ @ 0x1803D4B88 (--1CDropFeedback@@UEAA@XZ.c)
 */

CDropFeedback *__fastcall CDropFeedback::`vector deleting destructor'(CDropFeedback *this, char a2)
{
  CDropFeedback::~CDropFeedback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
